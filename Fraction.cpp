#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2==0){
        int k=n/2;
        if(k%2!=0){
            cout<<n/2-2<<" "<<n/2+2;
        }
        else
            cout<<n/2-1<<" "<<n/2+1;
    }
    else{
        cout<<n/2<<" "<<n/2+1;
    }
    return 0;
}
