// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
        
//         vector<int> ans(1,1);
//         long long res = 1;
//         for(int i=0;i<rowIndex;i++){
//             res = res*(rowIndex-i);
//             res = res/(i+1);
//             ans.push_back(res);
//         }
        
//         return ans;
//     }
   
// };

//better solution/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans(rowIndex + 1, 1);
        long long res = 1;
        
        for(int i = 1; i <= rowIndex; ++i) {
            res = res * (rowIndex - i + 1) / i;
            ans[i] = int(res);
        }
        
        return ans;
    }
   
};