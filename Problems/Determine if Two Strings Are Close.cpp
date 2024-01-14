class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
            return false;
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        for(int i=0;i<word1.length();i++){
            hash1[word1[i] - 'a']++;
        }
        for(int i=0;i<word2.length();i++){
            if(hash1[word2[i]-'a']==0) 
                return false;
            hash2[word2[i]-'a']++;
        }
        sort(hash1.begin(), hash1.end());
        sort(hash2.begin(), hash2.end());
        for(int i=0;i<26;i++){
            if(hash1[i]!=hash2[i]) 
                return false;
        }
        return true;
    }
};