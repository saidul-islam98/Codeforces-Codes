#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,sum;
    cin>>n;

    long long int a[n],suma[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    suma[0]=a[0];
    for(int i=1;i<n;i++){
        suma[i]=suma[i-1]+a[i];
    }

    int m;
    cin>>m;

    int d[m];
    for(int i=0;i<m;i++){
        cin>>d[i];
    }

    if(n==2){
        if(d[0]==1)
            cout<<a[0]<<'\n';
        else
            cout<<a[1]<<'\n';
    }
    else{
        for(int i=0;i<m;i++){
            int idx=n-d[i];
            sum=suma[n-d[i]-1]+(suma[n-1]-suma[idx]);
            cout<<sum<<'\n';
        }
    }
    return 0;
}
