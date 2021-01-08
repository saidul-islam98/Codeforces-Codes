#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,c,cnt=1;
    cin>>n>>c;

    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
        if((a[i+1]-a[i])<=c){
            cnt++;
        }
        else{
            cnt=1;
        }
    }

    cout<<cnt;
    return 0;
}
