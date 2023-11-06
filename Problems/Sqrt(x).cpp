
// class Solution {
// public:
//     int mySqrt(int x) {
//         if (x == 0 || x == 1)
//             return x;
//         long i = 1, result = 1;
//     while (result <= x) {
//         i++;
//         result = i * i;
//     }
//     return i - 1;

//     }
// };

class Solution {
public:
long long int BSearch(int x) {
    int s = 0;
    int e = x;
    long long int ans = -1;

    while (s <= e) {
        long long int mid = s + (e - s) / 2;
        long long int square = mid * mid;
        if (square == x) {
            ans = mid;
            break;
        } else if (square < x) {
            ans = mid;
            s = mid + 1;
        } 
        else {
            e = mid - 1;
        }
    }
    return ans;
}
  
    int mySqrt(int x) {
        return BSearch(x);
    }
};