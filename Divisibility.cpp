#include<bits/stdc++.h>

using namespace std;

long long lcm(int a,int b){
    return (a/__gcd(a,b))*b;
}

int main(){
    int prev=2,lcms;
    for(int i=3;i<=10;i++){
        lcms=lcm(prev,i);
        prev=lcms;
    }

    long long int n;
    cin>>n;

    long long int res=n/lcms;
    cout<<res;
    return 0;
}
