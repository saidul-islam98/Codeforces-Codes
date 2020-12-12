#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    int flag=1;
    while(n>0){
        if(n%10==1){
            n=n/10;
        }
        else if(n%100==14){
            n=n/100;
        }
        else if(n%1000==144){
            n=n/1000;
        }
        else{
            flag=0;
            break;
        }
    }

    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
