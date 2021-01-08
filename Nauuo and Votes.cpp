#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;

    if((x-y)==0 && z>0){
        cout<<"?";
    }
    else if((x-y)==0 && z==0){
        cout<<"0";
    }
    else if((x>y+z)){
        cout<<"+";
    }
    else if((y>x+z)){
        cout<<"-";
    }
    else{
        cout<<"?";
    }
    return 0;
}
