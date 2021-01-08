#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    int mx=max(e,f);
    int mn=min(e,f);

    if(mx==e){
        int cnt=0;
        while(a!=0 && d!=0){
            cnt++;
            a--;
            d--;
        }
        int total=cnt*e;
        cnt=0;
        if(d>0){
            while(b!=0 && c!=0 && d!=0){
                cnt++;
                b--;
                c--;
                d--;
            }
        }
        total=total+cnt*f;
        cout<<total;
    }
    else{
        int cnt=0;
        while(b!=0 && c!=0 && d!=0){
            cnt++;
            b--;
            c--;
            d--;
        }
        int total=cnt*f;
        cnt=0;
        if(d>0){
            while(a!=0 && d!=0){
                cnt++;
                a--;
                d--;
            }
        }
        total=total+cnt*e;
        cout<<total;
    }
    return 0;
}
