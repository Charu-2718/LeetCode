class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        int mid = n/2;

        string s1 = s.substr( 0 , mid );
        string s2 = s.substr( mid , n);
        
        return count_vowel(s1) == count_vowel(s2) ;
       
    }
    int count_vowel(string s){
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        int count=0;

        for (char c : s) {
                if (vowels.count(c) > 0) {
                    count++;
                }
            }
        return count;
    }
};