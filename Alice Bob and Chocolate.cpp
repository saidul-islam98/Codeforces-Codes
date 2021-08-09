#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int alice=0,bob=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int i=0,j=n-1,cntal=0,cntbo=0;
    for(;i<=j;){
        if(alice<=bob){
            alice+=a[i];
            cntal++;
            i++;
        }
        else{
            bob+=a[j];
            j--;
            cntbo++;
        }
    }

    cout<<cntal<<' '<<cntbo;
    return 0;
}
