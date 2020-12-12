#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int total;
    total=n/2;

    if(n%2==0){
        cout<<total<<"\n";
        while(total--){
            cout<<"2 ";
        }
    }
    else{
        cout<<total<<"\n";
        total=total-1;
        while(total--){
            cout<<"2 ";
        }
        cout<<"3";
    }
    return 0;
}
