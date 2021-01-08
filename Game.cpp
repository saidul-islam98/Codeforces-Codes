#include<bits/stdc++.h>

using namespace std;

int main(){
    int n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;

    bool flag=true,flag1=false,flag2=false;

    while(1){
        if((n1-1)>=0 && flag==true){
            n1-=1;
            flag=false;
        }
        else{
            flag1=true;
            break;
        }

        if((n2-1)>=0 && flag==false){
            n2-=1;
            flag=true;
        }
        else{
            flag2=true;
            break;
        }
    }

    if(flag1==true) cout<<"Second";
    else if(flag2==true) cout<<"First";
    return 0;
}
