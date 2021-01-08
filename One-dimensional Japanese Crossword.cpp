#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    int cnt=0;
    vector<int> v;
    for(int i=0;i<s.length();i++){
        if(s[i]=='B') cnt++;
        else if(s[i]=='W' && cnt!=0){
            v.push_back(cnt);
            cnt=0;
        }
    }

    if(cnt>0)
        v.push_back(cnt);

    if(v.size()==0) cout<<0;
    else{
        cout<<v.size()<<'\n';
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
