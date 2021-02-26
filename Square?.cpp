#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n1,m1,n2,m2;
        cin>>n1>>m1>>n2>>m2;

        bool flag=false;
        int mx=max(n1,m1);
        mx=max(mx,n2);
        mx=max(mx,m2);

        if(mx==n1){
            if(mx==n2){
                if(m1+m2==n1){
                    flag=true;
                }
            }
            else if(mx==m2){
                if(m1+n2==n1){
                    flag=true;
                }
            }
        }
        else if(mx==m1){
            if(mx==n2){
                if(n1+m2==m1){
                    flag=true;
                }
            }
            else if(mx==m2){
                if(n1+n2==m1){
                    flag=true;
                }
            }
        }

        if(flag==true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
