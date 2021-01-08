#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long int a[n+1],b[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        int k=1,j=n,l=1;
        bool flag=false;
        while(1){
            if(flag==false && k<=j){
                flag=true;
                b[l]=a[k];
                k+=1;
                l++;
            }
            else if(flag==true && j>=k){
                flag=false;
                b[l]=a[j];
                j-=1;
                l++;
            }
            else{
                break;
            }
        }

        for(int i=1;i<=n;i++){
            cout<<b[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
