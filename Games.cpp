#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    int total=n*(n-1);
    vector<pair<int,int>> tm;

    while(n--){
        int h,a;
        cin>>h>>a;
        tm.push_back(make_pair(h,a));
    }

    for(int i=0;i<tm.size();i++){
        int tmp=tm[i].first;
        for(int j=0;j<tm.size();j++){
            if(tmp==tm[j].second){
                cnt++;
            }
        }
    }

    cout<<cnt;
    return 0;
}
