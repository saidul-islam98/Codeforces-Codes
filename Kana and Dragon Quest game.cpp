#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,n,m;
        cin>>x>>n>>m;

        bool flag=false;
        while(1){
            if(x<=10){
                if(m>0){
                    x-=10;
                    m--;
                }
                else if(n>0){
                    x=x/10+10;
                    n--;
                }
            }
            else{
                if(n>0){
                    x=x/2+10;
                    n--;
                }
                else if(m>0){
                    x-=10;
                    m--;
                }
            }

            if(x<=0){
                flag=true;
                break;
            }
            if(n==0 && m==0 && x>0){
                break;
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
