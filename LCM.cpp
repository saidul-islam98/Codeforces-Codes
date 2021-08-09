#include<bits/stdc++.h>

using namespace std;

long long int countDivisors(long long int n){
    long long int cnt = 0;

    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i)
                cnt++;
            else
                cnt=cnt+2;
        }
    }
    return cnt;
}

int main(){

    long long int b,res;
    cin>>b;
    res = countDivisors(b);
    cout<<res;
    return 0;
}
