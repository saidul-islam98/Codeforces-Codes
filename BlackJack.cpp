#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    if(n<=10){
        cout<<0;
    }
    else if(n>=11 && n<=19){
        cout<<4;
    }
    else if(n==20){
        cout<<15;
    }
    else if(n==21){
        cout<<4;
    }
    else{
        cout<<0;
    }
    return 0;
}
