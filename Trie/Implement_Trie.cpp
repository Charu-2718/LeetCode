class Trie {
public:
    vector<string> v;
    Trie() {
        
    }
    
    void insert(string word) {
        v.push_back(word);
    }
    
    bool search(string word) {
        if(find(v.begin(),v.end(), word)!=v.end())
        {
            return true;
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        int n=prefix.size();
        for(int i=0;i<v.size();i++)
        {
            string words=v[i];
            string word=words.substr(0,n);
            if(word==prefix)
            {
                return true;
            }
        }
        return false;
    }
};
