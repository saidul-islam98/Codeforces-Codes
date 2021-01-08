#include<bits/stdc++.h>

using namespace std;

int main(){
    int y,b,r,sum;
    cin>>y>>b>>r;

    while(1){
        if(y+1<=b && y+2<=r){
            sum=3*y+3;
            break;
        }
        else{
            y--;
        }
    }

    cout<<sum;
    return 0;
}
