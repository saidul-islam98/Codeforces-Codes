#include<bits/stdc++.h>

using namespace std;

int main(){
    int k,l,m,n,d;
    int cntk=0, cntl=0, cntm=0, cntn=0;
    cin>>k>>l>>m>>n>>d;
    if(k==1){
        cout<<d;
    }
    else if(k!=1){
        for(int i=1;i<=d;i++){
            if(i%k==0){
                cntk++;
            }
            else if(i%l==0){
                cntl++;
            }
            else if(i%m==0){
                cntm++;
            }
            else if(i%n==0){
                cntn++;
            }
        }
        cout<<cntk+cntl+cntm+cntn;
    }

    return 0;
}
