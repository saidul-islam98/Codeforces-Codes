#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n;

    t=n;
    int cnto=0,jcnt=0;
    bool isZ=false,isO=false;

    while(t--){
        int x;
        cin>>x;
        if(x==1 && isZ==false && isO==false){
            cnto++;
            isO=true;
        }
        else if(x==1 && isZ==false && isO==true){
            cnto++;
        }
        else if(x==1 && isZ==true && isO==false){
            cnto++;
            jcnt++;
            isZ=false;
            isO=true;
        }
        else if(x==0 && isZ==false && isO==true){
            isZ=true;
            isO=false;
        }
    }

    cout<<cnto+jcnt;
    return 0;
}
