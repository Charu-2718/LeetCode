class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n+1);
        vector<int> outdegree(n+1);

        for(vector<int>& i : trust){

           int u = i[0];
           int v = i[1];

           indegree[v]++;
           outdegree[u]++;

        }
        for( int i= 1 ; i<= n ; i++){
            if( (indegree[i] == n-1) && (outdegree[i] == 0) ){
                return i;
            }
            
        }
        
        return -1;
        
    }
};