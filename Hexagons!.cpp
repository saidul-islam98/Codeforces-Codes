#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,total;
    cin>>n;

    if(n==0){
        cout<<1;
    }
    else if(n==1){
        cout<<7;
    }
    else{
        total=1+3*n*(n+1);
        cout<<total;
    }
    return 0;
}
