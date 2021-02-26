#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a,b;
    cin>>a>>b;

    string s="",ss="";

    while(a){
        s+=(a%3)+1;
        a/=3;
    }
    while(b){
        ss+=(b%3)+1;
        b/=3;
    }

    long long int k=1,ans=0;

    while(s.size()<ss.size())
        s+=1;
    while(ss.size()<s.size())
        ss+=1;

    for(long long int i=0;i<s.size();i++){
        ans+=((ss[i]-s[i]+3)%3)*k;
        k*=3;
    }

    cout<<ans;

    return 0;
}
