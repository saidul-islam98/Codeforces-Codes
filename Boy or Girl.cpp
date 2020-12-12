#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> ch;
    int cnt=0, flag=0;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<s.length();j++){
            if(i!=j && s[i]==s[j] && i>j){
                flag=1;
                break;
            }
            else if(i!=j && s[i]==s[j] && i<j){
                break;
            }
        }
        if(flag==0){
            ch.push_back(s[i]);
        }
        flag=0;
    }

    for(auto i=ch.begin();i!=ch.end();i++){
        cnt++;
    }

    if(cnt%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
