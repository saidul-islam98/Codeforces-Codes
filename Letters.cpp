#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,m,sum=0;
    cin>>n>>m;

    vector<pair<long long int,long long int>> v;
    for(int i=1;i<=n;i++){
        long long int a;
        cin>>a;
        sum+=a;
        v.push_back(make_pair(i,sum));
    }

    int o=0;
    while(m--){
        long long int x;
        cin>>x;
        for(int i=o;i<n;i++){
            if(x<=v[i].second && i==0){
                cout<<v[i].first<<' '<<x<<'\n';
                o=i;
                break;
            }
            else if(x<=v[i].second && i>0){
                o=i;
                cout<<v[i].first<<' '<<(x-v[i-1].second)<<'\n';
                break;
            }
        }
    }
    return 0;
}
