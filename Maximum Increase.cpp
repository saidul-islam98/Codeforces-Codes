#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,cnt=1,mx=1;
    cin>>n;

    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            cnt++;
            if(mx<cnt){
                mx=cnt;
            }
        }
        else{
            cnt=1;
        }
    }

    cout<<mx;
    return 0;
}
