#include<bits/stdc++.h>

using namespace std;

bool sortsec(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second>b.second);
}

int main(){
    long long int n,m,t,cnt=0;
    cin>>n>>m;
    t=m;
    vector<pair<long long int,long long int>> v;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(),v.end(),sortsec);

//    for(int i=0;i<v.size();i++){
//        cout<<v[i].first<<' '<<v[i].second<<'\n';
//    }

    int i=0;
    while(n>0){
        if(n-v[i].first>=0){
            cnt+=(v[i].first*v[i].second);
            n-=v[i].first;
            i++;
            if(i==v.size())
                break;
        }
        else if(n-v[i].first<0){
            if(n>0){
                cnt+=(n*v[i].second);
                break;
            }
        }
    }

    cout<<cnt;
    return 0;
}
