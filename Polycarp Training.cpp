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
    int cnt=1,o=a[0];

    for(int i=1;i<n;i++){
        if(cnt<a[i]){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}
