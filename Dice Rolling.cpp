#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,cnt=0;
        cin>>n;

        int x=7;
        while(1){
            if(n-x<0){
                x--;
            }
            else if((n-x)==0){
                cnt++;
                break;
            }
            else{
                n-=x;
                cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
