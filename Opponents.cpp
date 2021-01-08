#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,t;
    cin>>n>>m;
    t=m;

    int mx=0,cnt=0;
    while(t--){
        int k=n;
        bool flag=false;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                cnt++;
                flag=true;
                break;
            }
        }
        if(flag==false){
            cnt=0;
        }
        if(mx<cnt){
            mx=cnt;
        }
    }

    cout<<mx;
    return 0;
}
