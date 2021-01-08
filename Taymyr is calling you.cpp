#include<bits/stdc++.h>

using namespace std;

long long gcd(long long int a, long long int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b){
    return (a/gcd(a,b))*b;
}

int main(){
    int n,m,z,cnt=0;
    cin>>n>>m>>z;

    int lcms=lcm(n,m),com=lcms;
    for(int i=0;com<=z;i++){
        com+=lcms;
        cnt++;
    }

    cout<<cnt;
    return 0;
}
