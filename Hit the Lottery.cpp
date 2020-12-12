#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,cnt=0;
    cin>>n;
    while(n>0){
        if((n/100)>0){
            n=n-100;
            cnt++;
        }
        else if((n/20)>0){
            n=n-20;
            cnt++;
        }
        else if((n/10)>0){
            n=n-10;
            cnt++;
        }
        else if((n/5)>0){
            n=n-5;
            cnt++;
        }
        else{
            n=n-1;
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}
