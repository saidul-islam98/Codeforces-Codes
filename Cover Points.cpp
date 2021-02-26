#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t,mxX=-9999999999,mxY,total;
    cin>>n;
    t=n-1;
    long long int x,y;
    cin>>x>>y;
    mxX=x;
    mxY=y;
    total=mxX+mxY;
    while(t--){
        cin>>x>>y;

        if(mxX<=x){
            if(x+y>total){
                total=x+y;
            }
        }
        else if(mxY<=y){
            if(x+y>total){
                total=x+y;
            }
        }
    }

    cout<<total;
    return 0;
}
