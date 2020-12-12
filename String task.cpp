#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    vector<char> c;

    for(int i=0;i<s.length();i++){
        if((s[i]!='a' && s[i]!='A') && (s[i]!='e' && s[i]!='E') && (s[i]!='i' && s[i]!='I') && (s[i]!='o' && s[i]!='O') && (s[i]!='u' && s[i]!='U') &&(s[i]!='y' && s[i]!='Y')){
            c.push_back('.');
            s[i]=tolower(s[i]);
            c.push_back(s[i]);
        }
    }

    for(auto i=c.begin();i!=c.end();i++){
        cout<<*i;
    }
    return 0;
}
