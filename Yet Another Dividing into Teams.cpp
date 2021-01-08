#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        bool flag=false;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);

        if(n==1){
            cout<<1<<'\n';
        }
        else if(n==2 && abs(a[0]-a[1])==1){
            cout<<2<<'\n';
        }
        else if(n==2 && abs(a[0]-a[1])!=1){
            cout<<1<<'\n';
        }
        else{
            for(int i=0;i<n-1;i++){
                if((a[i+1]-a[i])==1){
                    flag=true;
                    break;
                }
            }
            if(flag==true){
                cout<<2<<'\n';
            }
            else{
                cout<<1<<'\n';
            }
        }
    }
    return 0;
}
