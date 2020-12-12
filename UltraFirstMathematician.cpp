#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,ms;
    cin>>s>>ms;
    vector<int> out;
    for(int i=0;i<s.length();i++){
        if(s[i]==ms[i]){
            out.push_back(0);
        }
        else{
            out.push_back(1);
        }
    }
    for(auto i=out.begin();i!=out.end();i++){
        cout<<*i;
    }
    return 0;
}
