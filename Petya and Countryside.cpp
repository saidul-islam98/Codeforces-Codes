#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n],mx,cnt=0,cntf[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cntf[i]=1;
    }

    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            cntf[i]+=cnt;
            cnt++;
        }
        else{
            cntf[i]+=cnt;
            cnt=0;
        }
    }

    cntf[n-1]+=cnt;
    cnt=0;
    for(int i=n-1;i>=1;i--){
        if(a[i]<=a[i-1]){
            cntf[i]+=cnt;
            cnt++;
        }
        else{
            cntf[i]+=cnt;
            cnt=0;
        }
    }

    cntf[0]+=cnt;

    mx=*max_element(cntf,cntf+n);
    cout<<mx;
    return 0;
}
