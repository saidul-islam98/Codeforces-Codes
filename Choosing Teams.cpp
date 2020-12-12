#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,cnt=0;
    cin>>n>>k;
    int tp[n];
    for(int i=0;i<n;i++){
        cin>>tp[i];
    }
    sort(tp,tp+n);


    int i=0;
    while(i<n-2){
        int fm=tp[i];
        int sm=tp[i+1];
        int tm=tp[i+2];
        if(fm+k<=5 && sm+k<=5 && tm+k<=5){
            cnt++;
        }
        i+=3;
    }

    cout<<cnt;

    return 0;
}

