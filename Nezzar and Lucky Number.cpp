#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int q,d;
        cin>>q>>d;

        long long int a[q];
        for(int i=0;i<q;i++){
            cin>>a[i];
        }

        for(int i=0;i<q;i++){
            while(a[i]>d && a[i]<d*10 && a[i]%d){
                a[i]-=10;
            }
            if(a[i]<d){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }

    }
    return 0;
}
