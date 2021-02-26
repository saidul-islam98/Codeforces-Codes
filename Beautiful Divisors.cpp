#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int div[1000];
    for(int i=1;i<10;i++){
        div[i]=(pow(2,i)-1)*(pow(2,i-1));
    }

    int n;
    cin>>n;

    for(int i=9;i>=1;i--){
        if(n%div[i]==0){
            cout<<div[i];
            break;
        }
    }
    return 0;
}
