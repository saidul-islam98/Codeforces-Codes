#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,z;
    cin>>n>>m;
    z=m;
    int w[n+1];
    for(int i=1;i<=n;i++){
        w[i]=i;
    }

    while(1){
        bool flag=false;
        for(int k=1;k<=n;k++){
            if(z-w[k]>=0){
                z-=w[k];
            }
            else{
                flag=true;
                break;
            }
        }
        if(flag==true){
            break;
        }
    }

    cout<<z;
    return 0;
}
