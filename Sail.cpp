#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int t,xs,xe,ys,ye,cnt,i,len;
    bool flagx=false, flagy=false;
    cin>>t>>xs>>ys>>xe>>ye;
    string s;
    cin>>s;
    len=s.length();

    if(xs<=xe && ys<=ye){
        for(i=0;i<len;i++){
            if(s[i]=='N' && ys!=ye && flagy==false){
                ys+=1;
                cnt=i;
            }
            else if(s[i]=='E' && xs!=xe && flagx==false){
                xs+=1;
                cnt=i;
            }
            if(xs==xe){
                flagx=true;
            }
            if(ys==ye){
                flagy=true;
            }
        }
    }
    else if(xs<=xe && ys>=ye){
        for(int i=0;i<s.length();i++){
            if(s[i]=='S' && ys!=ye && flagy==false){
                ys-=1;
                cnt=i;
            }
            else if(s[i]=='E' && xs!=xe && flagx==false){
                xs+=1;
                cnt=i;
            }
            if(xs==xe){
                flagx=true;
            }
            if(ys==ye){
                flagy=true;
            }
        }
    }
    else if(xs>=xe && ys<=ye){
        for(int i=0;i<s.length();i++){
            if(s[i]=='N' && ys!=ye && flagy==false){
                ys+=1;
                cnt=i;
            }
            else if(s[i]=='W' && xs!=xe && flagx==false){
                xs-=1;
                cnt=i;
            }
            if(xs==xe){
                flagx=true;
            }
            if(ys==ye){
                flagy=true;
            }
        }
    }
    else if(xs>=xe && ys>=ye){
        for(int i=0;i<s.length();i++){
            if(s[i]=='S' && ys!=ye && flagy==false){
                ys-=1;
                cnt=i;
            }
            else if(s[i]=='W' && xs!=xe && flagx==false){
                xs-=1;
                cnt=i;
            }
            if(xs==xe){
                flagx=true;
            }
            if(ys==ye){
                flagy=true;
            }
        }
    }

    if(flagx==true && flagy==true){
        cout<<cnt+1;
    }
    else{
        cout<<"-1";
    }

    return 0;
}
