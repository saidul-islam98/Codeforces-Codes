#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int a,b,c;

    a=sqrt((x*z)/y);
    c=z/a;
    b=x/a;

    int result=(a+b+c)*4;
    cout<<result;

    return 0;
}
