#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int x,p;
    for(int i=k-1;i>=0;i--){
        if(n%i==0){
            p=i;
            break;
        }
    }

    x=p+(n/p*k);
    cout<<x;
    return 0;
}
