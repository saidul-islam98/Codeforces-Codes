#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnteven=0,cntodd=0;
    cin>>n;
    int a[n];
    bool flag=true;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            cnteven++;
        }
        else{
            cntodd++;
        }
    }

    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            flag=false;
            break;
        }
    }

    if(flag==true){
        if(cnteven>0 || cntodd%2!=0){
            cout<<n;
        }
        else{
            cout<<0;
        }
    }
    else{
        if(cntodd%2==0){
            cout<<cnteven;
        }
        else{
            cout<<cntodd;
        }
    }

    return 0;
}
