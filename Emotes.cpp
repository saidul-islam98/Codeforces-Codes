#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,m,k,t,total=0;
    cin>>n>>m>>k;
    t=m;

    long long int a[n],cnt=k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    total=((m/(k+1))*(k*a[n-1]+a[n-2]))+(m%(k+1))*a[n-1];

    cout<<total;
    return 0;
}
