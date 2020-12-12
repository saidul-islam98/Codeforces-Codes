#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,seq;
    cin>>n;
    seq=n/3;
    int x[8];
    for(int i=1;i<8;i++){
        x[i]=0;
    }
    while(n--){
        int val;
        cin>>val;
        x[val]++;
    }

    if(x[5]==0 && x[7]==0 && x[2]>=x[4] && x[1]==x[4]+x[6] && x[2]+x[3]==x[4]+x[6]){

        for(int i=0;i<x[4];++i){
            cout<<"1 2 4"<<endl;
        }

        x[2]-=x[4];

        for(int i=0;i<x[2];++i){
            cout<<"1 2 6"<<endl;
        }

        for(int i=0;i<x[3];++i){
            cout<<"1 3 6"<<endl;
        }
    }
    else{
        cout<<"-1";
    }

    return 0;
}
