#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long int cnt=0,pos=0;

    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            cnt++;
            pos=i;
        }
    }

    if(cnt==0){
        cout<<cnt;
    }
    else if(cnt==1 && a[n-1]<=a[0]){
        cout<<n-pos;
    }
    else{
        cout<<"-1";
    }
    return 0;
}
