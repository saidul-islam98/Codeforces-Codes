#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,t;
    cin>>n>>k;

    t=k;
    string s;
    cin>>s;

    map<char,int> mp;
    set<int> st;

    for(int i=0;i<n;i++){
        mp[s[i]]=i;
    }

    for(int i=0;i<n;i++){
        st.insert(s[i]);
        if(st.size()>k){
            cout<<"YES";
            return 0;
        }
        if(mp[s[i]]==i){
            st.erase(s[i]);
        }
    }

    cout<<"NO";
    return 0;
}
