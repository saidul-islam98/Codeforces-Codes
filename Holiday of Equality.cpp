#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long int a[n], mx, sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    mx=a[n-1];

    for(int i=0;i<n-1;i++){
        sum+=mx-a[i];
    }

    cout<<sum;
    return 0;
}
