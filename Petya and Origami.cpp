#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;

    long long int totalr,totalg,totalb,cnt=0;
    totalr=n*2;
    totalg=n*5;
    totalb=n*8;

    if(totalr%k==0){
        cnt+=totalr/k;
    }
    else{
        cnt+=(totalr/k)+1;
    }

    if(totalg%k==0){
        cnt+=totalg/k;
    }
    else{
        cnt+=(totalg/k)+1;
    }

    if(totalb%k==0){
        cnt+=totalb/k;
    }
    else{
        cnt+=(totalb/k)+1;
    }

    cout<<cnt;
    return 0;
}
