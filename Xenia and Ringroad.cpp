#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    long long int prev,curr,cnt;
    cin>>prev;
    cnt=prev;
    for(int i=1;i<m;i++){
        cin>>curr;
        if(prev<=curr){
            cnt=cnt+curr-prev;
        }
        else{
            cnt=cnt+n+curr-prev;
        }
        prev=curr;
    }
    cout<<cnt-1;
    return 0;
}
