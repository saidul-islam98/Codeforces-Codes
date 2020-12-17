#include<bits/stdc++.h>

using namespace std;

int main(){
    int r,c,rcnt=0,ccnt=0;
    cin>>r>>c;

    char ck[r][c];
    bool cr[r],cc[c];
    memset(cr,true,sizeof(cr));
    memset(cc,true,sizeof(cc));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>ck[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(ck[i][j]=='S'){
                cr[i]=false;
                cc[j]=false;
            }
        }
    }

    for(int i=0;i<r;i++){
        if(cr[i]==true) rcnt++;
    }

    for(int i=0;i<c;i++){
        if(cc[i]==true) ccnt++;
    }

    int total=rcnt*c+(ccnt*r)-(rcnt*ccnt);

    cout<<total;
    return 0;
}
