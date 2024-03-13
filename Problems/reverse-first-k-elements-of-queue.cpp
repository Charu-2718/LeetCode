#include<iostream>
#include<stack>
#include<queue>
using namespace std;
queue<int> rearrange(queue<int> q, int k){
    int n = q.size();
    int remaining = n-k;

    stack<int> st;

    while(k--){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while(remaining--){
        q.push(q.front());
        q.pop();
    }
    return q;
}
int main(){
    int n;
    cin>>n;
    queue<int> q;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    int k;
    cin>>k;
    queue<int> ans = rearrange(q, k);
    while(!ans.empty()){
        cout<<ans.front()<<" ";
        ans.pop();
    }
    return 0;
}