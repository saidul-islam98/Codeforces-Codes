#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    sort(a+1,a+n+1,greater<int>());
    long long int sum=0,z=0;
    long long int prev=a[1]+1;
    for(int i=1;i<=n;i++){
        prev=max(z,min(prev-1,a[i]));
        sum+=prev;
    }

    cout<<sum;
    return 0;
}
