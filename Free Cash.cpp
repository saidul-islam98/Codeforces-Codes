#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,h,m,cnt=1,mx=-99999999;
    cin>>t;
    vector<pair<int,int>> v;

    for(int i=0;i<t;i++){
        cin>>h>>m;
        v.push_back(make_pair(h,m));
    }

    for(int i=0;i<v.size()-1;i++){
        if(v[i].first==v[i+1].first && v[i].second==v[i+1].second){
            cnt++;
        }
        else{
            if(mx<cnt){
                mx=cnt;
            }
            cnt=1;
        }
    }

    if(mx<=cnt){
        mx=cnt;
    }

    cout<<mx;
    return 0;
}
