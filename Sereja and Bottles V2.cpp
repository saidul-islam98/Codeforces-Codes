#include<bits/stdc++.h>

using namespace std;

int a[1000],b[1000];
int open[1001];

int main(){
    int n;
    cin>>n;
    int i,j,k;
    while(n--){
        memset(open,0,sizeof(open));
        for(i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(open[j]==1){
                    continue;
                }
                if(j==i){
                    continue;
                }
                if(b[i]==a[j]){
                    open[j]=1;
                }
            }
        }
        int cnt=0;
        for(i=0;i<n;i++){
            if(open[i]==0){
                cnt++;
            }
        }
        cout<<cnt;
    }
    return 0;
}
