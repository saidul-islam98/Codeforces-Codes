#include<bits/stdc++.h>

using namespace std;

int main(){
    int cnt;
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        cnt=1;
        for(int j=1;j<7;j++){
            if(s[i]==s[i+j]){
                cnt++;
            }
        }
        if(cnt>=7){
            break;
        }
    }

    if(cnt>=7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
