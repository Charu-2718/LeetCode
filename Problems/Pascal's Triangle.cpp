class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans;
        long long res = 1;
        ans.push_back(1);
        for(int i = 1; i < rowIndex; i++) {
            res = res * (rowIndex - i)/ i;
            ans.push_back(res);
        }
        
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(getRow(i));
        }
        return ans;
    }
};