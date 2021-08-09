#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;

    string s;
    cin>>s;

    char air[n+1],x,y;
    for(int i=1;i<=n;i++){
        air[i]=s[i-1];
        if(i==a){
            x=air[i];
        }
        else if(i==b){
            y=air[i];
        }
    }
//    cout<<'\n';
//    for(int i=1;i<=n;i++){
//        cout<<air[i];
//    }
//    cout<<'\n';

    if(x==y || a==b){
        cout<<0;
    }
    else{
        cout<<1;
    }
    return 0;
}
