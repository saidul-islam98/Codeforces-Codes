#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    bool flag=false;
    for(int i=1;i<=n;i++){
        int f,x,y,z;
        f=i;
        x=a[i];
        y=a[x];
        z=a[y];
        if(a[y]==f){
            flag=true;
            break;
        }
    }

    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
