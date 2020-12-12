#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i=1,cnt[10001],sum=0;
    cin>>n;

    memset(cnt,0,sizeof(cnt));

    for(int i=1;i<=10001;i++){
        cnt[i]=i;
    }

    for(int i=1;i<=10001;i++){
        cnt[i]+=cnt[i-1];
    }

    int x=0;
    while(1){
        if(n-cnt[x]<cnt[x+1]){
            break;
        }
        else{
            n-=cnt[x];
            x++;
            sum++;
        }
    }

    cout<<sum;
    return 0;
}
