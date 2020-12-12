#include<bits/stdc++.h>   ///AC Solution

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    int a[1000],b[1000],open[1001];
    memset(open,0,sizeof(open));

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        open[b[i]]+=1;
    }

    for(int i=0;i<n;i++){
        open[b[i]]-=1;
        if(open[a[i]]==0){
            cnt+=1;
        }
        open[b[i]]+=1;
    }

    cout<<cnt;
    return 0;
}
