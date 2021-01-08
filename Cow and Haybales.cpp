#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int j=1;
        while(d-j>=0 && n>1 && j<n){
            if(a[j]!=0){
                a[j]-=1;
                d-=j;
                a[0]++;
            }
            else{
                j++;
            }
        }
        cout<<a[0]<<'\n';
    }
    return 0;
}
