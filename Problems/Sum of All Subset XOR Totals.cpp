class Solution {
public:
    int subsetXORSum(vector<int>& n) {
        int bits=0;
        for(int k : n){
            bits |= k;
        }
        bits=bits<<(n.size()-1);
        return bits;
    }
};