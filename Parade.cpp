#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,L=0,R=0;
    cin>>n;

    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        L+=x;
        R+=y;
        v.push_back(make_pair(x,y));
    }

    int mxK=abs(L-R),idx=-1;
    for(int i=0;i<v.size();i++){
        int l=v[i].first;
        int r=v[i].second;
        int z=abs((L-l+r)-(R-r+l));
        if(z>mxK){
            mxK=z;
            idx=i+1;
        }
    }

    if(idx==-1)
        idx=0;
    cout<<idx;
    return 0;
}
