class Solution {
public:
    int maxLength(vector<string>& arr) {
        string temp = "" ;
        int n = arr.size() ; 
        int i = 0 ; 
        return solve( i , arr , temp , n);
    }

    int solve( int i , vector<string>& arr , string temp , int n){
        if(i >= n){
            return temp.length();
        }

        int include = 0;
        int exclude = 0;

        if(!duplicate(arr[i],temp)){
            include = solve(i+1, arr , temp+arr[i],n);
        }

        exclude = solve(i+1,arr,temp,n);

        return max(include, exclude);
    }

    bool duplicate(string &s1, string &s2){
        int arr[26] = {0};
        for(char ch : s1){
            if(arr[ch-'a']>0){
                return true;
            }
            arr[ch - 'a']++;
        }

        for(char ch : s2){
            if(arr[ch-'a']>0){
                return true;
            }
        }
        return false;
    }
};
