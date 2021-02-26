#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<pair<int,int>> v;
        vector<int> x;

        for(int i=1;i<=n;i++){
            x.push_back(i);
        }

        for(int i=0;i<n-1;i++){
            auto itr=x.end();
            itr--;
            int o=*itr;
            x.erase(itr);
            itr=x.end();
            itr--;
            int p=*itr;
            x.erase(itr);
            x.push_back((o+p+1)/2);
            v.push_back(make_pair(o,p));
        }

        cout<<*x.begin()<<'\n';
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<' '<<v[i].second<<'\n';
        }
    }
    return 0;
}



