#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n+1],b[n+1],idx;
    for(int i=1;i<=n;i++){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        a[i]=w+x+y+z;
        b[i]=w+x+y+z;
    }

    sort(b+1,b+n+1,greater<int>());

    for(int i=1;i<=n;i++){
        if(a[1]==b[i]){
            idx=i;
            break;
        }
    }

    cout<<idx;
    return 0;
}
