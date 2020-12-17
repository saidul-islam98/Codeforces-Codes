#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,val=0;
    cin>>n;

    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    sort(a+1,a+n+1);

    for(int i=1;i<=n;i++){
        if(i!=a[i]){
            val=i;
            break;
        }
    }

    if(val==0){
        cout<<n+1;
    }
    else{
        cout<<val;
    }
    return 0;
}
