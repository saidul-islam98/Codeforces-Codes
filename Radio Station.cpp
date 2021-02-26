#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<pair<string,string>> c,d;
    for(int i=0;i<n;i++){
        string s,str;
        cin>>s>>str;
        str+=';';
        c.push_back(make_pair(s,str));
    }

    for(int i=0;i<m;i++){
        string s,str;
        cin>>s>>str;
        d.push_back(make_pair(s,str));
    }

    for(int i=0;i<d.size();i++){
        for(int j=0;j<c.size();j++){
            if(d[i].second==c[j].second){
                cout<<d[i].first<<' '<<d[i].second<<" #"<<c[j].first<<'\n';
            }
        }
    }

    return 0;
}
