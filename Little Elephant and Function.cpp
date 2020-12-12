#include<bits/stdc++.h>

using namespace std;

int perm(int arr[], int n){
    if(n==1){
        return *arr;
    }
    swap(arr[n-1],arr[n]);
    n=n-1;
    return perm(arr, n);
}
int main(){
    int n,x;
    cin>>n;
    x=n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }
    perm(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
