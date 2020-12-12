#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    bool color=false, bw=false;
    while(n--){
        for(int i=0;i<m;i++){
            char c;
            cin>>c;
            if(c=='C' || c=='M' || c=='Y'){
                color=true;
            }
            else if(c=='W' || c=='B' || c=='G'){
                bw=true;
            }
        }
    }

    if(color==true){
        cout<<"#Color";
    }
    else{
        cout<<"#Black&White";
    }
    return 0;
}
