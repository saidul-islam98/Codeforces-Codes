#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0;i<n;i++){
        if(s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8'){
            cnt+=i+1;
        }
    }

    cout<<cnt;
    return 0;
}
