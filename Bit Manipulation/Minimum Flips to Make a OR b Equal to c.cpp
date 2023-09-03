class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;

        while(a || b || c){
            int bitA = a&1;
            int bitB = b&1;
            int bitC = c&1;

            if(bitC == 0){
                if(bitA==1 && bitB==1) ans+=2;
                else if(bitA || bitB) ans+= 1;
            }

            else if(bitC ==1 && bitA==0 && bitB==0){
                ans+= 1;
            }

            a>>= 1;
            b>>= 1;
            c>>= 1;
        }

        return ans;
    }
};