#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int perm[60];
    perm[0]=0;
    perm[1]=2;
    for(int i=2;i<60;i++){
        perm[i]=perm[i-1]+pow(2,i);
    }

    cout<<perm[n];

    return 0;
}
