#include<bits/stdc++.h>

using namespace std;

int main(){
    int k,r,n,cnt=0;
    cin>>k>>r;
    n=k;
    if(n%10==r || n%10==0){
        cout<<"1";
        return 0;
    }
    else{
        while(1){
            if(n%10==r || n%10==0){
                cnt++;
                break;
            }
            else{
                n=n+k;
                cnt++;
            }
        }
    }

    cout<<cnt;
    return 0;
}
