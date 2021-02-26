#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,st;
    cin>>s>>st;

    bool flag=true;
    string ss="";
    for(int i=0;i<s.length();i++){
        if(s[i]>=st[i]){
            ss+=st[i];
        }
        else{
            flag=false;
            break;
        }
    }

    if(flag==true){
        cout<<ss;
    }
    else{
        cout<<-1;
    }
    return 0;
}
