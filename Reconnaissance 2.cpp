#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,mhd=99999,fst,lst,idx1,idx2;
    cin>>n;
    int solja[n];
    for(int i=0;i<n;i++){
        cin>>solja[i];
    }
    fst=solja[0];
    lst=solja[n-1];

    if(n==2){
        if((lst-fst)>=0){
            if((lst-fst)<mhd){
                mhd=lst-fst;
                idx1=n;
                idx2=1;
            }
            cout<<idx1<<" "<<idx2;
        }
        else{
            if((fst-lst)<mhd){
                mhd=fst-lst;
                idx1=1;
                idx2=n;
            }
            cout<<idx1<<" "<<idx2;
        }
    }
    else{
         for(int i=0;i<n;i++){
            if((solja[i]-solja[i+1])>=0){
                if((solja[i]-solja[i+1])<mhd){
                    mhd=(solja[i]-solja[i+1]);
                    idx1=i+1;
                    idx2=i+2;
                }
            }
            else{
                if((solja[i+1]-solja[i])<mhd){
                    mhd=(solja[i+1]-solja[i]);
                    idx1=i+1;
                    idx2=i+2;
                }
            }
        }

        if((lst-fst)>=0){
            if((lst-fst)<mhd){
                mhd=lst-fst;
                idx1=n;
                idx2=1;
            }
            cout<<idx1<<" "<<idx2;
        }
        else{
            if((fst-lst)<mhd){
                mhd=fst-lst;
                idx1=n;
                idx2=1;
            }
            cout<<idx1<<" "<<idx2;
        }
    }


    return 0;
}
