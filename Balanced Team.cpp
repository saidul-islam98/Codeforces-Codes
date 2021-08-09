#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    int mx=0,j=0;

    for(int i=0;i<n;i++){
        while(j<n && a[j]-a[i]<=5){
            j++;
            mx=max(mx,j-i);
        }
    }

    cout<<mx;
    return 0;
}
