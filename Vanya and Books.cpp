#include<bits/stdc++.h>

using namespace std;

int countDigits(long long int n){
    int digits=0;
    while(n>0){
        digits++;
        n/=10;
    }
    return digits;
}
int main(){
    long long int n;
    cin>>n;

    if(n<10){
        cout<<n;
    }
    else{
        long long int cnt=0;
        int dgt=countDigits(n);
        cnt=n*dgt+dgt-1;

        int c=1;
        for(int i=0;i<dgt-1;i++){
            c*=10;
            cnt-=c;
        }
        cout<<cnt;
    }
    return 0;
}
