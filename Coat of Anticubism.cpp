#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n],sum=0,mx,res;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    mx=*max_element(a,a+n);
    res=mx-(sum-mx)+1;
    cout<<res;
    return 0;
}
