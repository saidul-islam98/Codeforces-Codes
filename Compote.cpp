#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a<1 || b<2 || c<4){
        cout<<0;
        return 0;
    }
    else{
        while(1){
            if(a*2<=b && a*4<=c){
                cout<<a+a*2+a*4;
                break;
            }
            else{
                a--;
            }
        }
    }
    return 0;
}
