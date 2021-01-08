#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%3!=0){
        int x=n-3;
        cout<<1<<" "<<2<<" "<<x;
    }
    else{
        if((n/3)%3==0){
            int x=n-2;
            cout<<1<<" "<<1<<" "<<x;
        }
        else{
            int x=n/3;
            cout<<x<<" "<<x<<" "<<x;
        }
    }
    return 0;
}
