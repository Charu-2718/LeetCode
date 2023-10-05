class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> freq;
 
    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }
 
    unordered_set<int> uniqueFreq;
 
    for (auto& i : freq) {
        if (uniqueFreq.count(i.second))
            return false;
        else
            uniqueFreq.insert(i.second);
    }
 
    return true;   
        
        
    }
    
};