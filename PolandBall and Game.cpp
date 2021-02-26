#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,fp,sp;
    cin>>n>>m;

    int k=n+m,z=k;
    set<string> s;

    while(k--){
        string t;
        cin>>t;
        s.insert(t);
    }

    if((z-s.size())%2==1){
        n++;
    }

    if(n>m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
