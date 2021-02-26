#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int cnta=2,cntb=0;
    for(int i=0;i<n;i++){
        if(cnta>0){
            cout<<'a';
            cnta--;
            if(cnta==0)
                cntb=2;
        }
        else if(cntb>0){
            cout<<'b';
            cntb--;
            if(cntb==0)
                cnta=2;
        }
    }
    return 0;
}
