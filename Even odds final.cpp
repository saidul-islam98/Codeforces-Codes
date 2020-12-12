#include<bits/stdc++.h>  ///AC Solution

using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;

    long long int numba;

    if(k<=(n+1)/2){
        numba=(k*2)-1;
        cout<<numba;
    }
    else{
        numba=(k-((n+1)/2))*2;
        cout<<numba;
    }
    return 0;
}
