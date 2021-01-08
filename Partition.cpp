#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n;
    t=n;
    int sum=0;
    while(t--){
        int x;
        cin>>x;
        if(x<0){
            sum+=abs(x);
        }
        else{
            sum+=x;
        }
    }

    cout<<sum;
    return 0;
}
