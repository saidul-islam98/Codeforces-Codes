#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<pair<string,int>> v;

    for(int i=0;i<s.length()-1;i++){
        string st="";
        st+=s[i];
        st+=s[i+1];
        v.push_back(make_pair(st,0));
    }

    int mx=-999999;
    for(int i=0;i<v.size();i++){
        int cnt=0;
        for(int j=i+1;j<v.size();j++){
            if(v[i].first==v[j].first){
                cnt++;
            }
        }
        v[i].second=cnt;
        if(mx<cnt)
            mx=cnt;
    }

    for(int i=0;i<v.size();i++){
        if(v[i].second==mx){
            cout<<v[i].first;
            break;
        }
    }

    return 0;
}
