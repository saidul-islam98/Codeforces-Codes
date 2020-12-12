#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k,cnt=1,mn=9999999999,mx=-9999999999;
    vector<pair<long long int, long long int>> line;
    bool flag=false;

    cin>>n;
    k=n;
    while(n--){
        long long int x,y;
        cin>>x>>y;
        line.push_back(make_pair(x,y));
    }

    for(int i=0;i<k;i++){
        if(line[i].first<mn){
            mn=line[i].first;
        }
        if(line[i].second>mx){
            mx=line[i].second;
        }
    }

    for(int i=0;i<k;i++){
        if(line[i].first==mn && line[i].second==mx){
            flag=true;
            break;
        }
        else{
            cnt++;
        }
    }

    if(flag==true){
        cout<<cnt;
    }
    else{
        cout<<"-1";
    }
    return 0;
}
