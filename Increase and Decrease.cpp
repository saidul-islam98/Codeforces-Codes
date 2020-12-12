#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k,sum=0,res;
    bool flag=false;
    cin>>n;
    k=n;
    long long int m[n];
    for(int i=0;i<n;i++){
        cin>>m[i];
        sum+=m[i];
    }

    if(sum%n!=0){
        cout<<n-1;
    }
    else{
        cout<<n;
    }
    return 0;
}
