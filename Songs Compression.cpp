#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,m,initsum=0,initsum2=0;
    cin>>n>>m;

    vector<long long int> v;
    for(int i=0;i<n;i++){
        long long int x,y;
        cin>>x>>y;
        initsum+=x;
        initsum2+=y;
        v.push_back(x-y);
    }

    sort(v.begin(),v.end(),greater<int>());

    if(initsum<=m){
        cout<<0;
    }
    else if(initsum2>m){
        cout<<-1;
    }
    else{
        long long int mncnt=0;

        for(int i=0;i<v.size();i++){
            initsum-=v[i];
            mncnt++;
            if(initsum<=m){
                break;
            }
        }
        cout<<mncnt;
    }
    return 0;
}
