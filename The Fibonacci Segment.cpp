#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=2,mx=2;
    cin>>n;

    long long int x[n];

    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    if(n==1){
        cout<<1;
        return 0;
    }
    else if(n==2){
        cout<<2;
        return 0;
    }
    else{
        for(int i=2;i<n;){
            if(x[i]==(x[i-1]+x[i-2])){
                cnt++;
                if(mx<=cnt){
                    mx=cnt;
                }
                i++;
            }
            else{
                cnt=2;
                i++;
            }
        }
        cout<<mx;
    }

    return 0;
}
