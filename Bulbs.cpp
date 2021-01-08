#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,m;
    cin>>t>>m;

    bool b[m+1],flag=true;
    memset(b,false,sizeof(b));

    while(t--){
        int n;
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            if(b[x]==false){
                b[x]=true;
            }
        }
    }

    for(int i=1;i<=m;i++){
        if(b[i]==false){
            flag=false;
            break;
        }
    }

    if(flag==false){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
