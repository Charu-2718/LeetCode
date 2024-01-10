class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        unordered_map<int,int> lost_map;

        for(int i = 0 ; i < matches.size() ; i++ ){

            int loser = matches[i][1];
            lost_map[loser]++;

        }

        vector<int> not_lost;
        vector<int> once_lost;

        for( int i = 0 ; i < matches.size() ; i++ ){

            int winner = matches[i][0];
            int loser = matches[i][1];
            
            if(lost_map[loser] == 1){
                once_lost.push_back( loser );
            }

            if(lost_map.find(winner) == lost_map.end() ){
                not_lost.push_back( winner );
                lost_map[winner] = 2;
            }
        }
        sort(not_lost.begin(),not_lost.end());
        
        sort(once_lost.begin(),once_lost.end());

        return {not_lost , once_lost} ;
    }
};