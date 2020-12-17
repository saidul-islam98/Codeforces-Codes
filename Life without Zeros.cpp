#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int x,y,z,nz,cnt1=0,cnt2=0;

    cin>>x>>y;
    z=x+y;

    string fs,ss,rs,cfs="",css="",crs="";
    fs=to_string(x);
    ss=to_string(y);
    rs=to_string(z);

    for(int i=0;i<fs.length();i++){
        if(fs[i]!='0'){
            cfs+=fs[i];
        }
    }
    for(int i=0;i<ss.length();i++){
        if(ss[i]!='0'){
            css+=ss[i];
        }
    }

    x=stoi(cfs);
    y=stoi(css);

    nz=x+y;

    for(int i=0;i<rs.length();i++){
        if(rs[i]!='0'){
            crs+=rs[i];
        }
    }

    z=stoi(crs);

    if(nz==z){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
