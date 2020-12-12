#include<bits/stdc++.h>

using namespace std;

int main(){
    bool flag=false;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            flag=true;
            cout<<"YES";
            break;
        }
    }
    if(flag==false){
        cout<<"NO";
    }
    return 0;
}
