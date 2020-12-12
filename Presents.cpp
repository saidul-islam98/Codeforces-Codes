#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    vector<pair<int,int>> pr;
    for(int i=1;i<=n;i++){
        cin>>m;
        pr.push_back(make_pair(m,i));
    }


    sort(pr.begin(),pr.end());

    for(int i=0;i<pr.size();i++){
        cout<<pr[i].second<<" ";
    }
    return 0;
}
