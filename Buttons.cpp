#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,sum=0;
    cin>>n;

    for(int i=1;i<=n-1;i++){
        sum+=((n-i)*i);
    }

    sum+=n;
    cout<<sum;
    return 0;
}
