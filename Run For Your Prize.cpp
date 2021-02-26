#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int sp=1e6;
    for(int i=1;i<=n;i++){
        int x=a[i]-1;
        int y=sp-a[i];
        b[i]=min(x,y);
    }

    int mx=*max_element(b+1,b+n+1);
    cout<<mx;
    return 0;
}
