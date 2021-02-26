#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int mn;
        int a[n],cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        mn=a[n-1];
        for(int i=n-2;i>=0;i--){
            if(a[i]>mn){
                cnt++;
            }
            else{
                mn=a[i];
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
