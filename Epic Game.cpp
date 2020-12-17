#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){

    if(a == 0)
        return b;
    if(b == 0)
        return a;

    if(a == b)
        return a;

    if(a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);
}


int main(){
    int a,b,n;
    cin>>a>>b>>n;

    bool flag=false,sim=false,ants=false;
    while(1){
        if(flag==false){
            int x=gcd(a,n);
            if(n-x>=0){
                n-=x;
                flag=true;
            }
            else{
                sim=true;
                break;
            }
        }
        else if(flag==true){
            int x=gcd(b,n);
            if(n-x>=0){
                n-=x;
                flag=false;
            }
            else{
                ants=true;
                break;
            }
        }
    }


    if(sim==true){
        cout<<1;
    }
    else if(ants==true){
        cout<<0;
    }
    return 0;
}
