#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0;i<n;i+=2){
        if((s[i]=='a' && s[i+1]=='a') || (s[i]=='b' && s[i+1]=='b')){
            cnt++;
            if(s[i]=='b')
                s[i]='a';
            else
                s[i]='b';
        }
    }

    cout<<cnt<<'\n';
    cout<<s;
    return 0;
}
