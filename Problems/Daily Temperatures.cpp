class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        //brute force 
        // time limit exceeded
        // int n = t.size();
        // vector<int> ans(n,0);
        
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = i + 1 ; j < n; j++){
        //         if(t[i] < t[j]){
        //             ans[i] = j-i;
        //             break;
        //         }
                
                
        //     }
        // }return ans;
        int n = t.size();
        stack<int> res;
        vector<int> ans(n);
        for(int i = n-1 ;i >= 0 ; i--){
            while(!res.empty() && t[i] >= t[res.top()]){
                res.pop();
            }
            if(res.empty()){
                ans[i]= 0 ;
            }
            else{
                ans[i]= res.top()-i;
            }
            res.push(i);
        }
        return ans;      
    }
};