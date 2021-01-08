#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y,z,a,b,c;
    cin>>x>>y>>z;
    cin>>a>>b>>c;

    if(x>a){
        cout<<"NO";
    }
    else if(x<=a){
        int remain=(a-x)+b;
        if(y>remain)
            cout<<"NO";
        else if(y<=remain && z>(remain-y+c)){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
    return 0;
}
