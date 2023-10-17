class Solution {
public:
    bool isPalindrome(string s) {
        string u ;
        for(auto i:s){
            if( isalpha(i) || isdigit(i)){
                u += tolower(i);
            }
        }
        string v = u ;
        reverse(u.begin(),u.end());
        if(u==v){
            return true;
        }
        return false;
    }
};
