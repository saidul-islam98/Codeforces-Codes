#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    string fs,ss;
    cin>>fs>>ss;

    for(int i=0;i<ss.length();i++){
        int x=int(fs[i])-48;
        int y=int(ss[i])-48;
        if((x==0 && y==6) || (x==6 && y==0) || (x==1 && y==7) || (x==7 && y==1) || (x==2 && y==8) || (x==8 && y==2) || (x==3 && y==9) || (x==9 && y==3)){
            cnt+=4;
        }
        else if((x==0 && y==7) || (x==7 && y==0) || (x==1 && y==8) || (x==8 && y==1) || (x==2 && y==9) || (x==9 && y==2)){
            cnt+=3;
        }
        else if((x==0 && y==8) || (x==8 && y==0) || (x==1 && y==9) || (x==9 && y==1)){
            cnt+=2;
        }
        else if((x==0 && y==9) || (x==9 && y==0)){
            cnt+=1;
        }
        else{
            cnt+=abs(x-y);
        }
    }

    cout<<cnt;
    return 0;
}
