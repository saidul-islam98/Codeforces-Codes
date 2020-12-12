#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,cnt=0;
    cin>>a>>b;

    while(1){
        if(a>b){
            cout<<cnt;
            break;
        }
        else{
            a=a*3;
            b=b*2;
            cnt++;
        }
    }
    return 0;
}
