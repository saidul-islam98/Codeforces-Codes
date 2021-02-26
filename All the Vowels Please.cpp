#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){

    if(n<=1)
        return false;

    for(int i=2;i<n;i++)
        if(n%i==0)
            return false;

    return true;
}

int main(){
    int k;
    cin>>k;

    char c[5]={'a','e','i','o','u'};
    int a[26]={0};

    if(isPrime(k)){
        cout<<-1;
    }
    else if(k<25){
        cout<<-1;
    }
    else{
        int t,iter1=0,iter2=0;
        t=k;

        bool isPoss=false;
        int idx1,idx2;
        for(int i=5;i<k;i++){
            if(k%i==0){
                if(k/i>=5){
                    idx1=i;
                    idx2=k/i;
                    isPoss=true;
                    break;
                }
            }
        }

        if(isPoss){
            for(int i=0;i<k;i++){
                cout<<c[(i/idx2+i%idx2)%5];
            }
        }
        else{
            cout<<-1;
        }

    }
    return 0;
}
