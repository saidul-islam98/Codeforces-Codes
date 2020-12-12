#include<bits/stdc++.h>

using namespace std;

int main(){
    int cnt=0;
    string s;
    cin>>s;
    vector<char> c;

    for(int i=0;i<s.length();i++){
        if(s[i]=='0' && cnt==0){
            cnt++;
            continue;
        }
        else{
            c.push_back(s[i]);
        }
    }
    if(cnt==0){
        c.pop_back();
    }

    for(int i=0;i<c.size();i++){
        cout<<c[i];
    }

    return 0;
}
