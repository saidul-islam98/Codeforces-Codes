#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n;

    t=n;
    int cnto=0,cntt=0,cnth=0,cntf=0,taxi=0;

    while(t--){
        int x;
        cin>>x;
        if(x==1)
            cnto++;
        else if(x==2)
            cntt++;
        else if(x==3)
            cnth++;
        else
            cntf++;
    }

    taxi+=cntf;
    if(cnth>=cnto){
        taxi+=cnth;
        cnto=0;
    }
    else{
        taxi+=cnth;
        cnto-=cnth;
    }

    if(cntt%2==0){
        taxi+=(cntt/2);
    }
    else{
        taxi+=((cntt-1)/2);
        cnto+=2;
    }

    while(cnto-4>=0){
        taxi++;
        cnto-=4;
    }

    if(cnto>0)
        taxi++;

    cout<<taxi;
    return 0;
}
