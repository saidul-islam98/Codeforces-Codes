#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,cnt=0;
    cin>>n>>k;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0,j=n-1;i<n;){
        if(a[i]<=k){
            cnt++;
            i++;
        }
        else if(a[j]<=k){
            cnt++;
            j--;
        }
        if(a[i]>k && a[j]>k) break;
    }

    cout<<cnt;
    return 0;
}
