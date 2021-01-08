#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k,x,y=0;
        cin>>n>>k;
        x=n;
        int a[26]={0};
        for(int i=0;i<26;i++){
            a[i]=i+97;
        }
        int cnt=0;
        while(x--){
            if(cnt==k){
                cnt=0;
                y=0;
            }
            cout<<char(a[y]);
            y++;
            cnt++;
        }
        cout<<'\n';
    }
    return 0;
}
