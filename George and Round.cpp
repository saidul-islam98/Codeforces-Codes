#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    int cnt=n;
    if(cnt>m) cnt=m;

    for(int i=cnt;i>=0;i--){
        bool possible=true;
        for(int j=0;j<i;j++){
            if(a[j]>b[m-i+j]){
                possible=false;
            }
        }
        if(possible){
            cout<<n-i;
            return 0;
        }
    }
    return 0;
}
