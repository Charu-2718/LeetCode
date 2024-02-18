#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

unordered_set<string> st;
int t[51];
int n;

int solve(int idx, string s) {
    if (idx >= s.length()) {
        return 0;
    }
    if (t[idx] != -1) {
        return t[idx];
    }
    int minExtra = n;
    string currStr = "";

    for (int i = idx; i < n; i++) {
        currStr.push_back(s[i]);

        int currExtra = (st.find(currStr) == st.end()) ? currStr.length() : 0;
        int nextExtra = solve(i + 1, s);
        int totalExtra = currExtra + nextExtra;

        minExtra = min(totalExtra, minExtra);
    }

    return t[idx] = minExtra;
}

#include <cstring> 

int minExtraChar(string s, vector<string>& dictionary) {
    n = s.length();
    memset(t, -1, sizeof(t));
    for (string &word : dictionary) {
        st.insert(word);
    }
    return solve(0, s);
}

int main() {
    string s;
    vector<string> dictionary;
    
    cout << "Enter the string: ";
    cin >> s;

    int dictSize;
    cout << "Enter the size of the dictionary: ";
    cin >> dictSize;

    cout << "Enter the words in the dictionary:\n";
    for (int i = 0; i < dictSize; i++) {
        string word;
        cin >> word;
        dictionary.push_back(word);
    }

    cout << "Result: " << minExtraChar(s, dictionary) << endl;
    return 0;
}
