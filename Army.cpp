#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t,a,b,cnt=0;
    cin>>n;
    t=n-1;
    int k=2;
    int arr[n+2]={0};

    while(t--){
        cin>>arr[k];
        k++;
    }

    cin>>a>>b;

    for(int i=a+1;i<=b;i++){
        cnt+=arr[i];
    }

    cout<<cnt;
    return 0;
}
