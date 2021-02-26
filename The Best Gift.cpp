#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,m;
    cin>>n>>m;

    long long int a[11]={0};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }

    long long int sum=0;
    for(int i=1;i<=m;i++){
        sum+=((a[i]*(a[i]-1))/2);
    }

    long long int total=(n*(n-1))/2;
    total=total-sum;
    cout<<total;
    return 0;
}
