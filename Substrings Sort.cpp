#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<pair<int,string>> s;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string st;
        cin>>st;
        s.push_back(make_pair(st.length(),st));
    }

    sort(s.begin(),s.end());

    bool isPossible=true;
    for(int i=0;i<s.size()-1;i++){
        if(s[i+1].second.find(s[i].second)==string:: npos){
            cout<<"NO\n";
            return 0;
        }
    }

    cout<<"YES\n";
    for(int i=0;i<s.size();i++){
        cout<<s[i].second<<'\n';
    }

    return 0;
}
