#include<bits/stdc++.h>

using namespace std;

bool isPrime(long long int n){
    if (n <= 1)
        return false;

    for (long long int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

long long int divCount(long long int n){
    if(n==1){
        long long int cnt=1;
        return cnt;
    }
    long long int cnt=0;
    for (long long int i = 1; i <= n; i++){
        if (n % i == 0){
            cnt++;
        }
        if(cnt>3){
            return cnt;
        }
    }

    return cnt;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;
        bool isp=isPrime(n);
        if(isp){
            cout<<"NO\n";
        }
        else{
            long long int cnt=divCount(n);
            if(cnt==3){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
