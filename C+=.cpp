#include<bits/stdc++.h>

using namespace std;

int sum(long long int a, long long int b, long long int cnt, long long int n){

    if(a>n || b>n){
        return cnt;
    }
    if(a>b){
        return sum(a,a+b,cnt+1,n);
    }
    else{
        return sum(a+b,b,cnt+1,n);
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a,b,x,y,n,cnt=0;
        cin>>a>>b>>n;
        cnt=sum(a,b,cnt,n);
        cout<<cnt<<'\n';
    }
    return 0;
}
