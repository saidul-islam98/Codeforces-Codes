#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,curr,cap,cnt=0;
    cin>>n;
    vector<pair<int,int>> acc;

    for(int i=0;i<n;i++){
        cin>>curr>>cap;
        acc.push_back(make_pair(curr,cap));
    }

    for(int i=0;i<n;i++){
        if(acc[i].second-acc[i].first>=2){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}
