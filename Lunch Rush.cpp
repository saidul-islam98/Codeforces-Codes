#include<bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second < b.second);
}

int main(){
    long long int n,k,j;
    cin>>n>>k;

    vector<pair<long long int, long long int>> v;

    for(int i=0;i<n;i++){
        long long int f,t;
        cin>>f>>t;
        v.push_back(make_pair(f,t));
    }

    sort(v.begin(),v.end(),sortbysec);

    bool flag=false;
    long long int joy,mx=-9999999999;
    for(int i=0;i<n;i++){
        if(v[i].second<=k){
            if(mx<=v[i].first){
                mx=v[i].first;
            }
        }
        else if(v[i].second>k){
            joy=v[i].first-(v[i].second-k);
            if(mx<=joy){
                mx=joy;
            }
        }
    }

    cout<<mx;
    return 0;
}
