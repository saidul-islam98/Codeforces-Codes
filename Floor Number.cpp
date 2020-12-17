#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x,cnt=1;
        cin>>n>>x;

        if(n<=2){
            cout<<1<<'\n';
        }
        else{
            while(n>(cnt*x+2)){
                cnt++;
            }
            cnt++;
            cout<<cnt<<'\n';
        }
    }
    return 0;
}
