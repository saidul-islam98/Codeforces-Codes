#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int val=0;

    for(int i=2;i<=n-1;i++){
        val+=(i*(i+1));
    }

    cout<<val;
    return 0;
}
