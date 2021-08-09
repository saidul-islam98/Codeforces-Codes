#include<bits/stdc++.h>

using namespace std;

int main(){
    long long b,d,s;
    cin>>b>>d>>s;

    long long mx = max(max(b,d),s)-1;

    long long mn,bmn,dmn,smn;
    bmn=max(mx-b,0LL);
    dmn=max(mx-d,0LL);
    smn=max(mx-s,0LL);

    mn=bmn+dmn+smn;
    cout<<mn;
    return 0;
}
