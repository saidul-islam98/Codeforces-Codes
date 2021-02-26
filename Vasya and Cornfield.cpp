#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;

    int m;
    cin>>m;

    while(m--){
        int xp,yp;
        cin>>xp>>yp;
        int d1=xp+yp;
        int d2=xp-yp;
        if((d1>=d && d1<=(2*n-d)) && d2>=(-1)*d && d2<=d){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
