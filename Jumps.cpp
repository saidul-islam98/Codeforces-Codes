#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ipos=0,cnt=0,i=1;
        while(ipos<=n+1 && ipos!=n){
            ipos+=i;
            i++;
            cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
