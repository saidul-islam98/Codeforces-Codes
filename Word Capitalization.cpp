#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    vector<char> fn;
    for(int i=0;i<s.length();i++){
        if(i==0 && islower(s[i])){
            fn.push_back(toupper(s[i]));
        }
        else{
            fn.push_back(s[i]);
        }
    }

    for(auto i=fn.begin();i!=fn.end();i++){
        cout<<*i;
    }
    return 0;
}

