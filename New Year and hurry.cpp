#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,dt,i=1;
    int t=240;
    cin>>n>>dt;

    while(1){
        if(t-(dt+i*5)<0){
            break;
        }
        else if(i>n){
            break;
        }
        else{
            dt=dt+i*5;
            i++;
        }
    }

    cout<<i-1;
    return 0;
}
