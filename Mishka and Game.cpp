#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,ms=0,ch=0,dr=0;
    cin>>n;

    while(n--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            ms++;
        }
        else if(y>x){
            ch++;
        }
        else{
            dr++;
        }
    }

    if(ms>ch){
        cout<<"Mishka";
    }
    else if(ch>ms){
        cout<<"Chris";
    }
    else if(ms==ch){
        cout<<"Friendship is magic!^^";
    }
    else if(ms==0 && ch==0 && dr>0){
        cout<<"Friendship is magic!^^";
    }
    return 0;
}
