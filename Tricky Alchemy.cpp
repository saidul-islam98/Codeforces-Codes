#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int yc,bc;
    cin>>yc>>bc;

    long long int yb,gb,bb;
    cin>>yb>>gb>>bb;

    long long int totalyc,totalbc,total=0;
    totalyc=2*yb+gb;
    totalbc=3*bb+gb;

    if(totalyc>yc){
        total=totalyc-yc;
    }

    if(totalbc>bc){
        total+=(totalbc-bc);
    }

    cout<<total;
    return 0;
}
