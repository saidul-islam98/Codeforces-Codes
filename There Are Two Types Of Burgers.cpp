#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int b,p,f,cntb=0,cntc=0,total;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;
        bool bf=false, cn=false;

        if(b==1) cout<<0<<'\n';
        else{
            if(h>=c){
                bf=true;
            }
            else{
                cn=true;
            }

            if(bf==true){
                while(b>1 && p>0){
                    b-=2;
                    p-=1;
                    cntb+=h;
                }
                if(b>=2){
                    while(b>1 && f>0){
                        b-=2;
                        f-=1;
                        cntc+=c;
                    }

                    total=cntb+cntc;
                    cout<<total<<'\n';
                }
                else{
                    cout<<cntb<<'\n';
                }
            }
            else if(cn==true){
                while(b>1 && f>0){
                    b-=2;
                    f-=1;
                    cntc+=c;
                }
                if(b>=2){
                    while(b>1 && p>0){
                        b-=2;
                        p-=1;
                        cntb+=h;
                    }

                    total=cntb+cntc;
                    cout<<total<<'\n';
                }
                else{
                    cout<<cntc<<'\n';
                }
            }
        }
    }
    return 0;
}
