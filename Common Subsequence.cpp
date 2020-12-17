#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m,x;
        cin>>n>>m;
        bool flag=false;
        bool c[1001];
        memset(c,false,sizeof(c));
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
            c[a[i]]=true;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }

        for(int i=0;i<m;i++){
            if(c[b[i]]==true){
                x=b[i];
                flag=true;
                break;
            }
            else{
                continue;
            }
        }


        if(flag==false){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES\n";
            cout<<1<<" "<<x<<'\n';
        }
    }
    return 0;
}
