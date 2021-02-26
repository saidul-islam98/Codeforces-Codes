#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n],b[n],curr;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    b[n-1]=0;
    curr=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]>curr){
            b[i]=0;
            curr=a[i];
        }
        else if(a[i]==curr){
            b[i]=1;
        }
        else{
            b[i]=curr-a[i]+1;
        }
    }


    for(int i=0;i<n;i++){
        cout<<b[i]<<' ';
    }
    return 0;
}
