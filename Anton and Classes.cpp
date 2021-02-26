#include<bits/stdc++.h>

using namespace std;

bool sortbyS(const pair<int,int>&a, const pair<int,int>&b){
    return a.second<b.second;
}

bool sortbyF(const pair<int,int>&a, const pair<int,int>&b){
    return a.first>b.first;
}

int main(){
    int n;
    cin>>n;

    vector<pair<int,int>> cs;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        cs.push_back(make_pair(x,y));
    }

    sort(cs.begin(),cs.end(),sortbyS);

    int m;
    cin>>m;

    vector<pair<int,int>> pc;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        pc.push_back(make_pair(x,y));
    }

    sort(pc.begin(),pc.end(),sortbyF);

    int res1=pc[0].first-cs[0].second;

    sort(pc.begin(),pc.end(),sortbyS);
    sort(cs.begin(),cs.end(),sortbyF);

    int res2=cs[0].first-pc[0].second;

    cout<<max(0,max(res1,res2));

    return 0;
}
