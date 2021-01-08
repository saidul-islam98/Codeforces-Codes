#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=1;i<n;){
        if(a[i]>a[i-1]){
            cnt+=(a[i]-a[i-1]);
        }
        i+=2;
    }

    cout<<cnt;
    return 0;
}
