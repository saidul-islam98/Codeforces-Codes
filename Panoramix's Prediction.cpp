#include<bits/stdc++.h>

using namespace std;

int isPrime(int m){
    if(m%2==0){
        return 0;
    }
    else if(m%3==0 && m/3>1){
        return 0;
    }
    else if(m%5==0 && m/5>1){
        return 0;
    }
    else if(m%7==0 && m/7>1){
        return 0;
    }
    else if(m%11==0 && m/11>1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int n,m,flag;
    cin>>n>>m;
    flag=isPrime(m);
    if(flag==0){
        cout<<"NO";
    }
    else{
        if(n==2 && m>=5){
            cout<<"NO";
        }
        else if(n==3 && m>=7){
            cout<<"NO";
        }
        else if((m-n)==2){
            cout<<"YES";
        }
        else if((m-n)==4){
            cout<<"YES";
        }
        else if((m-n)>=6 && isPrime(m-2)){
            cout<<"NO";
        }
        else if((m-n)>=6 && isPrime(m-4)){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
    return 0;
}
