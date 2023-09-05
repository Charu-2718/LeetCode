class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged="";
        for(int i=0;i<word1.length()||i<word2.length();i++){
            if(i<word1.length()){
                merged +=word1[i];
            }
            if(i<word2.length()){
                merged +=word2[i];
            }

        }
        return merged;
    }
};