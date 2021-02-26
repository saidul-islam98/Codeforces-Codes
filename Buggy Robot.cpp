#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int L=0,R=0,U=0,D=0,sum=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='L'){
            L++;
        }
        else if(s[i]=='D'){
            D++;
        }
        else if(s[i]=='R'){
            R++;
        }
        else if(s[i]=='U'){
            U++;
        }
    }

    if(L>0 && R==0 && D>0 && U==0){
        cout<<0;
    }
    else if(L==0 && R>0 && U>0 && D==0){
        cout<<0;
    }
    else if(L==0 && R>0 && D>0 && U==0){
        cout<<0;
    }
    else if(L>0 && R==0 && U>0 && D==0){
        cout<<0;
    }
    else if(L>0 && R==0 && D==0 && U>0){
        cout<<0;
    }
    else if(L==0 && R>0 && U==0 && D>0){
        cout<<0;
    }
    else if(L==0 && R>0 && D>0 && U==0){
        cout<<0;
    }
    else if(L>0 && R==0 && U>0 && D==0){
        cout<<0;
    }
    else{
        int minH=min(L,R);
        int minV=min(D,U);
        sum+=(minH+minV);
        cout<<sum*2;
    }

    return 0;
}
