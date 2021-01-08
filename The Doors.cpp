#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int idx0,idx1;
    bool flag0=false,flag1=false;
    for(int i=n-1;i>=0;i--){
        if(a[i]==0 && flag0==false){
            idx0=i+1;
            flag0=true;
        }
        else if(a[i]==1 && flag1==false){
            idx1=i+1;
            flag1=true;
        }
        else if(flag0==true && flag1==true){
            break;
        }
    }

    if(idx1<=idx0){
        cout<<idx1;
    }
    else{
        cout<<idx0;
    }
    return 0;
}
