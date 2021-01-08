#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b+1,b+n+1,greater<int>());
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i]==b[j]){
                cout<<j<<" ";
                break;
            }
        }
    }
    return 0;
}
