#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i+=2){
            int x=(-1)*a[i+1];
            int y=a[i];
            cout<<x<<" "<<y<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
