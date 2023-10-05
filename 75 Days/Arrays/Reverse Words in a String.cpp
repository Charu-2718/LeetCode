class Solution {
public:
    string reverseWords(string s) {
        int n=s.size(),i=0;
        string ans="";
        while(i<n)
        {
            string tm="" ;
           while( s[i]==' '&& i<n)
              i++;
           while( s[i]!=' '&& i<n)
           {
          tm+=s[i];
              i++;
           }
           if(tm.size()>0){
               if(ans.size()==0)
               ans=tm;
               else
               ans= tm+" "+ans;
           }
        }
        return ans;
    }
};