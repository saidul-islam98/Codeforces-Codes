#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int a[n],cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=n-1;i>0;i--){
            if(a[i]<a[i-1]){
                cnt+=(a[i-1]-a[i]);
            }
        }

        cout<<cnt<<'\n';
    }
    return 0;
}
