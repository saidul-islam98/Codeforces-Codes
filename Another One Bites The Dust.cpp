#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a,b,c,cnt=0;
    cin>>a>>b>>c;

    cnt=c*2;
    long long int mn=min(a,b);
    if(a==b){
        cnt+=(mn*2);
        cout<<cnt;
    }
    else{
        cnt+=(mn*2)+1;
        cout<<cnt;
    }
    return 0;
}
