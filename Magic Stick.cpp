#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int x,y;
        cin>>x>>y;

        if(x==y){
            cout<<"YES\n";
        }
        else if(x>y){
            cout<<"YES\n";
        }
        else if(x==1 && y!=1){
            cout<<"NO\n";
        }
        else if(x==2 || x==3){
            if(y<4){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"YES\n";
        }

    }
    return 0;
}
