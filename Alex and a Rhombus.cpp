#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int r[104];
    r[1]=1;
    for(int i=2;i<104;i++){
        r[i]=r[i-1]+4*(i-1);
    }

    cout<<r[n];
    return 0;
}
