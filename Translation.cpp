#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,st;
    cin>>s>>st;

    int flag=0, len=s.length();

    for(int i=0,j=len-1;i<s.length();i++,j--){
        if(s[i]==st[j]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }

    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
