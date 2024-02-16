#include<iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int unique(vector<int> &arr, int k){

    map<int,int> mp;
    for(int i = 0; i < arr.size(); i++){
        mp[arr[i]]++;
    }
    vector<int> freq;

    for(auto i : mp){
        freq.push_back(i.second);
    }
    sort(freq.begin(),freq.end());

    
    for(int i = 0; i < freq.size(); i++){
        k -= freq[i];
        if(k < 0 ){
            return freq.size() - i;
        }
    }
    return 0;

} 

int main(){
    vector<int> arr ;
    int n ;
    cin >> n;   
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int k;
    cin >> k;
    int result = unique(arr,k);
    cout << result << endl;
    return 0;
}