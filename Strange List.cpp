#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,x,k=1,sum=0;
        cin>>n>>x;

        long long int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
            sum+=a[i];
        }


        while(k){
            for(int i=0;i<n;i++){
                if(a[i]%x==0){
                    sum+=b[i];
                    a[i]/=x;
                }
                else{
                    k=0;
                    break;
                }
            }
        }

        cout<<sum<<'\n';
    }
    return 0;
}
