#include<bits/stdc++.h>

using namespace std;

bool sortbyf(const pair<int,int>&a, const pair<int,int>&b){
    if(a.second==b.second){
        return a.first>b.first;
    }
    return a.second>b.second;
}

int main(){
    int n;
    cin>>n;

    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end(),sortbyf);

    int res=0,cnt=1,curr=0;

    while(cnt && curr<n){
        res+=v[curr].first;
        cnt+=v[curr].second;
        curr++;
        cnt--;
    }

    cout<<res;
    return 0;
}
