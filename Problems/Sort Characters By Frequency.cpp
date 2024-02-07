class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>> vec(123);
        for(auto &ch : s){
            int freq = vec[ch].second;
            vec[ch] = {ch,freq+1};
        }

        auto comp = [&](pair<char, int>& P1, pair<char, int>& P2){
            return P1.second > P2.second;
        };

        sort(begin(vec),end(vec), comp);
        
        string ans = "";
        for(int i = 0 ; i <= 122 ; i++){
            if(vec[i].second >0 ){
                char ch = vec[i].first;
                int freq = vec[i].second;
                ans += string(freq, ch);

            }
            
        }
        return ans;
    }
};