class Solution {
public:
    bool isPowerOfTwo(int n) {
      
    //    if(n == 1) return true;
    //    if(!n) return false;
       
    //    return n % 2 == 0 and isPowerOfTwo(n / 2);

    return (n > 0 && (n & (n - 1)) == 0);
    }
};