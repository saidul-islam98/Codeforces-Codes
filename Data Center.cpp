#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,mn=99999999,per;
    cin>>n;

    int x=sqrt(n);

    for(int i=1;i<=x;i++){
        if(n%i==0){
            int c=i;
            int d=n/i;
            per=2*(c+d);
        }

        if(per<mn){
            mn=per;
        }
    }

    cout<<mn;
    return 0;
}
