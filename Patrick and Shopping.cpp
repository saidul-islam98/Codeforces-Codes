#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int d1,d2,d3,total1,total2;

    cin>>d1>>d2>>d3;

    total1=d1+d2+d3;

    if((2*d1+2*d2)<=total1 && (2*d1+2*d2)<=(2*d1+2*d3) && (2*d1+2*d2)<=(2*d2+2*d3)){
        cout<<(2*d1+2*d2);
    }
    else if((2*d2+2*d3)<=total1 && (2*d2+2*d3)<=(2*d1+2*d2) && (2*d2+2*d3)<=(2*d1+2*d2)){
        cout<<(2*d2+2*d3);
    }
    else if((2*d1+2*d3)<=total1 && (2*d1+2*d3)<=(2*d2+2*d3) && (2*d1+2*d3)<=(2*d1+2*d2)){
        cout<<(2*d1+2*d3);
    }
    else{
        cout<<total1;
    }
    return 0;
}
