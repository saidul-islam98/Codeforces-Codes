#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int cntw=0,cntd=0,cntl=0;

    for(int i=1;i<=6;i++){
        if(abs(a-i)<abs(b-i)){
            cntw++;
        }
        else if(abs(a-i)>abs(b-i)){
            cntl++;
        }
        else{
            cntd++;
        }
    }

    cout<<cntw<<" "<<cntd<<" "<<cntl;
    return 0;
}
