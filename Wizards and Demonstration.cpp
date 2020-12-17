#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,x,demo;
    float y;

    cin>>n>>x>>y;
    y=y/100;

    demo=ceil(n*y);

    if(demo-x>=0){
        cout<<demo-x;
    }
    else{
        cout<<0;
    }

    return 0;
}
