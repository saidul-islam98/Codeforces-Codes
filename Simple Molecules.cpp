#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;


    if((a+b+c)%2!=0) cout<<"Impossible";
    else{
        int x,y,z;
        if((a+b-c)%2==0 && (a-b+c)%2==0 && (b+c-a)%2==0){
            x=(a+b-c)/2;
            y=(b+c-a)/2;
            z=(a-b+c)/2;
            if((x>=0) && (y>=0) && (z>=0)){
                cout<<x<<" "<<y<<" "<<z;
            }
            else{
                cout<<"Impossible";
            }
        }
        else{
            cout<<"Impossible";
        }

    }
    return 0;
}
