#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,idx;
        cin>>n;

        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        long long int mx=*max_element(a,a+n);
        bool flag=false;
        for(int i=0;i<n;i++){
            if(a[i]==mx && i==0 && a[i+1]!=mx){
                idx=i+1;
                flag=true;
                break;
            }
            else if(a[i]==mx && i==n-1 && a[i-1]!=mx){
                idx=i+1;
                flag=true;
                break;
            }
            else if(a[i]==mx && (i>0 && i<n-1) && (a[i+1]<mx || a[i-1]<mx)){
                idx=i+1;
                flag=true;
                break;
            }
        }

        if(flag==true){
            cout<<idx<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
    return 0;
}
