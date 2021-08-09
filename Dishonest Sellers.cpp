#include<bits/stdc++.h>

using namespace std;

bool sortbyf(const pair<int,int> &a, const pair<int,int> &b){
    return (a.first<b.first);
}

int main(){
    int n,k,t;
    cin>>n>>k;

    t=k;
    vector<pair<int,int>> vc;
    vector<int> nc;
    long long int initsum=0;

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            int x;
            if(i==0){
                cin>>x;
                vc.push_back(make_pair(x,0));
                initsum+=x;
            }
            else{
                cin>>x;
                vc[j].second=x;
            }
        }
    }

    for(int i=0;i<n;i++){
        nc.push_back(vc[i].first-vc[i].second);
    }

    sort(vc.begin(),vc.end(),sortbyf);

    long long int sum=0;
    for(int i=0;i<n;i++){
        if(vc[i].first<vc[i].second) t--;
    }

    if(t<=0){
        for(int i=0;i<n;i++){
            if(vc[i].first<vc[i].second){
                sum+=vc[i].first;
            }
            else{
                sum+=vc[i].second;
            }
        }
    }
    else{
        sort(nc.rbegin(),nc.rend());
        for(int i=0;i<n-k;i++){
            initsum-=max(nc[i],0);
        }
        sum=initsum;
    }

    cout<<sum;

    return 0;
}
