#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,m,k;
    cin>>n>>m;

    set<long long int> h,v;
    vector<long long int> vc;
    k=m;

    while(k--){
        long long int x,y,hsz,vsz;
        cin>>x>>y;
        h.insert(x);
        v.insert(y);

        hsz=h.size();
        vsz=v.size();

        long long int ans=n*hsz+n*vsz-hsz*vsz;
        ans=n*n-ans;
        vc.push_back(ans);
    }

    for(int i=0;i<vc.size();i++){
        cout<<vc[i]<<' ';
    }
    return 0;
}
