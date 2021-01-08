#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[5];
    cin>>a[1]>>a[2]>>a[3]>>a[4];

    sort(a+1,a+5);

    if(a[4]==(a[1]+a[2]+a[3])){
        cout<<"YES";
    }
    else if((a[2]+a[3])==(a[1]+a[4])){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
