#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,d;
    cin>>n>>m>>d;
    int x=n*m, mid, comp, cnt=0;
    int a[x+1];
    int c[x];
    int b[n][m];
    bool flag=false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i*m+j]=b[i][j];
        }
    }

    for(int i=1;i<=x;i++){
        a[i]=c[i-1];
    }

    a[0]=0;
    sort(a,a+x+1);


    mid=x/2+1;
    comp=a[mid];

    for(int i=1;i<mid;i++){
        int z;
        if((comp-a[i])%d==0){
            z=(comp-a[i])/d;
            cnt+=z;
        }
        else{
            flag=true;
            break;
        }
    }

    if(flag==true){
        cout<<"-1";
        return 0;
    }
    else{
        for(int i=mid;i<=x;i++){
            int z;
            if((a[i]-comp)%d==0){
                z=(a[i]-comp)/d;
                cnt+=z;
            }
            else{
                flag=true;
                break;
            }
        }
        if(flag==true){
            cout<<"-1";
        }
        else{
            cout<<cnt;
        }
    }

    return 0;
}
