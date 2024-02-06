class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& words) {
        // Unordered map to store anagram groups
        unordered_map<string, vector<string>> anagramGroups;
        
        for (const string& word : words) {
            
            string key = word;
            sort(key.begin(), key.end());
            if (anagramGroups.find(key) == anagramGroups.end()) {
                anagramGroups[key] = {word};
            }
            
            else {
                anagramGroups[key].push_back(word);
            }
        }
        
        vector<vector<string>> result;
        for (const auto& group : anagramGroups) {
            result.push_back(group.second);
        }
        
        return result;
    }
};