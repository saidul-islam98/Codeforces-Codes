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

    for(int i=1;i<n;i++){
        if((a[i]-a[i-1])>=2){
            cnt=cnt+(a[i]-a[i-1])-1;
        }
    }

    cout<<cnt;
    return 0;
}
