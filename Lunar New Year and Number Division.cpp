#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n],b[n/2],c[n/2];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    for(int i=0;i<n/2;i++){
        b[i]=a[i];
    }
    for(int i=n/2,j=0;i<n;i++,j++){
        c[j]=a[i];
    }

    sort(c,c+n/2,greater<int>());

    long long int sum=0;
    for(int i=0;i<n/2;i++){
        sum+=pow(b[i]+c[i],2);
    }

    cout<<sum;
    return 0;
}
