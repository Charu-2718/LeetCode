#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points){
        int n = points.size();
        sort(points.begin(),points.end());
        int count =1 ;
        
        vector<int> prev = points[0];
        for(int i = 0 ; i < n ; i++){
            int str_curr = points[i][0];
            int end_curr = points[i][1];


            int str_prev = prev[0];
            int end_prev = prev[1];

            if(str_curr > end_prev){
                count++;
                prev = points[i];
            }
            else{
                prev[0]=max(str_curr,str_prev);
                prev[1]=min(end_prev,end_curr);
            }
        }
        return count;
    }
}