#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,w1=0,w2=0,cnt=0;
    cin>>n;
    k=n;

    while(n--){
        int m;
        cin>>m;
        if(m/100==1){
            w1++;
        }
        else{
            w2++;
        }
    }

    if(w1%2!=0){
        cout<<"NO";
    }
    else if(k==1 && w2==1){
        cout<<"NO";
    }
    else if(w1==0 && w2%2!=0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
