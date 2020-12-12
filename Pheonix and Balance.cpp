#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k,mx,mn,sumx=0,sumn=0,res;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            int x=pow(2,i+1);
            arr[i]=x;
        }
        mx=arr[n-1];
        mn=arr[0];
        if(n>2){
            for(int i=1;i<n/2-1;i++){
                sumx+=arr[i];
            }
            for(int i=n/2-1;i<n-1;i++){
                sumn+=arr[i];
            }

            sumx=sumx+mx+mn;
            res=sumx-sumn;
            cout<<res<<endl;
        }
        else{
            res=mx-mn;
            cout<<res<<endl;
        }

    }

    return 0;
}
