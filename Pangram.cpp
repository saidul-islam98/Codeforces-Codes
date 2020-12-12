#include<bits/stdc++.h>

using namespace std;

int main(){
    int alph[26],cnt=0;
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
    }

    for(int i=0;i<26;i++){
        alph[i]=0;
    }

    for(int i=0;i<s.length();i++){
        int x;
        x=(int)s[i]-97;
        alph[x]++;
    }

    for(int i=0;i<26;i++){
        if(alph[i]>0){
            cnt++;
        }
    }

    if(cnt==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
