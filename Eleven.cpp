#include<bits/stdc++.h>

using namespace std;
int fibm[25]={0};

int fib(int n){
    if(fibm[n]!=0){
        return fibm[n];
    }
    if(n<=2){
        return 1;
    }

    fibm[n]=fib(n-1)+fib(n-2);
    return fibm[n];
}


int main(){
    int x=fib(20);
    fibm[0]=0;
    fibm[1]=1;
    fibm[2]=1;
    int n;
    cin>>n;

    string s="";

    for(int i=1;i<=n;i++){
        bool flag=false;
        for(int j=0;j<25;j++){
            if(i==fibm[j]){
                flag=true;
                break;
            }
        }
        if(flag==true){
            s+='O';
        }
        else{
            s+='o';
        }
    }

    cout<<s;
    return 0;
}
