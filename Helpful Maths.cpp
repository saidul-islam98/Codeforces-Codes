#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> exp;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            exp.push_back(s[i]);
        }
    }
    sort(exp.begin(), exp.end());

    for (auto x=exp.begin();x!=exp.end();x++){
        if(x!=exp.end()-1) cout<<*x<<"+";
        else cout<<*x;

    }

    return 0;
}
