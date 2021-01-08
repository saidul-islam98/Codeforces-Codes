#include<bits/stdc++.h>

using namespace std;

bool Prime(int n){
    bool isPrime=true;
    if(n==0 || n==1){
        isPrime=false;
    }
    else{
        for(int i=2;i<=n/2;++i){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
    }
    return isPrime;
}

int main(){
    int n;
    cin>>n;

    if(n==1){
        cout<<3;
    }
    else if(n==2){
        cout<<4;
    }
    else{
        if(n%2==0){
            int i=1;
            while(Prime(n*i+1)){
                i++;
            }
            cout<<i;
        }
        else{
            cout<<3;
        }
    }
    return 0;
}
