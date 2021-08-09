#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<pair<int, string>> vc;
    int a=1e8,b=1e8,c=1e8,ab=1e8,bc=1e8,ca=1e8,abc=1e8;
    bool aa=false,bb=false,cc=false;
    for(int i=0;i<n;i++){
        int x;
        string y;
        cin>>x>>y;
        if(y.length()==1){
            if(y=="A"){
                a=min(a,x);
                aa=true;
            }
            else if(y=="B"){
                b=min(b,x);
                bb=true;
            }
            else if(y=="C"){
                c=min(c,x);
                cc=true;
            }
        }
        else if(y.length()==2){
            if(y=="AB" || y=="BA"){
                ab=min(x,ab);
                aa=true;
                bb=true;
            }
            else if(y=="BC" || y=="CB"){
                bc=min(x,bc);
                bb=true;
                cc=true;
            }
            else if(y=="CA" || y=="AC"){
                ca=min(x,ca);
                cc=true;
                aa=true;
            }
        }
        else if(y.length()==3){
            abc=min(x,abc);
            aa=true;
            bb=true;
            cc=true;
        }

    }

    if(aa && bb && cc){
        int mn=min(a+b+c,a+bc);
        mn=min(mn,b+ca);
        mn=min(mn,c+ab);
        mn=min(mn,ab+bc);
        mn=min(mn,bc+ca);
        mn=min(mn,ca+ab);
        mn=min(mn,abc);
        cout<<mn;
    }
    else{
        cout<<-1;
    }
    return 0;
}
