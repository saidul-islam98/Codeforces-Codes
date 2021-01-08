#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,c0,c1,h,cnt0=0,cnt1=0;
        cin>>n>>c0>>c1>>h;

        string s;
        cin>>s;

        for(int i=0;i<s.length();i++){
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }

        int intotal,c0total,c1total,mntotal;
        intotal=cnt0*c0+cnt1*c1;
        c0total=n*c0+cnt1*h;
        c1total=n*c1+cnt0*h;
        mntotal=min(intotal,c0total);
        mntotal=min(mntotal,c1total);
        cout<<mntotal<<'\n';
    }
    return 0;
}
