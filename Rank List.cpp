#include<bits/stdc++.h>

using namespace std;

bool compare( const pair<long long int,long long int>& x, const pair<long long int, long long int>& y ){

    return (x.first>y.first);

}

bool scompare( const pair<long long int,long long int>& x, const pair<long long int, long long int>& y ){

    return (x.second<y.second);

}


int main(){
    int n,k,t,z=0,ts,tt,nmt=0;
    cin>>n>>k;
    t=n;
    vector<pair<int,int>> v;
    vector<pair<int,int>> v2;
    while(t--){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end(),compare);

    ts=v[k-1].first;
    for(int i=0;i<v.size();i++){
        if(v[i].first!=ts){
            z++;
        }
        else{
            z++;
            break;
        }
    }

    for(int i=0;i<v.size();i++){
        if(v[i].first==ts){
            v2.push_back(make_pair(v[i].first,v[i].second));
        }
    }

    sort(v2.begin(),v2.end(),scompare);

    k=k-z;
    tt=v2[k].second;

    for(int i=0;i<v2.size();i++){
        if(v2[i].second==tt){
            nmt++;
        }
    }

    cout<<nmt;

    return 0;
}
