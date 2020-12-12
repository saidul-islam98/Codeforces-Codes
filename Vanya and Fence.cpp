#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,cnt=0;
    cin>>n>>m;

    while(n--){
        int val;
        cin>>val;
        if(val<=m){
            cnt++;
        }
        else{
            cnt+=2;
        }
    }

    cout<<cnt;
    return 0;
}
