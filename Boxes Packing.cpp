#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    int cnt=0,mx=-1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
        else{
            if(cnt>mx){
                mx=cnt;
            }
            cnt=0;
        }
    }

    if(cnt>mx){
        mx=cnt;
    }

    cout<<mx+1;
    return 0;
}
