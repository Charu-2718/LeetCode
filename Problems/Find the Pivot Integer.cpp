#include <iostream>
using namespace std;
int pivotInteger(int n){
    int sum=n*(n+1)/2;
    int i = 1;
    int count = i;
    while(i<=n){
        int left = sum - count ;
        if(left == count-i){
            return i;
        }
        i++;
        count = count+i;
        
    }
    return -1;

}
int  main(){
    int n;
    cin>>n;
    cout<<pivotInteger(n);
}