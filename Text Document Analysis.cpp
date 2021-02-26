#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int incnt=0,wrdcnt=0,mxcntOut=0,mxcntIn=0,inwrdcnt=0;
    bool ob=false;
    for(int i=0;i<n;i++){
        if(s[i]=='(' && wrdcnt==0){
            ob=true;
        }
        else if(((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) && ob==false){
            wrdcnt++;
        }
        else if((s[i]=='_' || s[i]=='(') && wrdcnt>0){
            if(mxcntOut<wrdcnt){
                mxcntOut=wrdcnt;
                wrdcnt=0;
            }
            else{
                wrdcnt=0;
            }
            if(s[i]=='('){
                ob=true;
            }
        }
        else if(s[i]==')'){
            ob=false;
        }
    }

    if(mxcntOut<wrdcnt){
        mxcntOut=wrdcnt;
    }

    for(int i=0;i<n;i++){
        if(s[i]=='('){
            ob=true;
        }
        else if(((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) && s[i+1]!='_' && s[i+1]!=')' && i+1<n && ob==true){
            incnt++;
        }
        else if(((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) && s[i+1]=='_' && i+1<n && ob==true){
            incnt++;
            if(mxcntIn<incnt){
                mxcntIn=incnt;
                incnt=0;
                inwrdcnt++;
            }
            else{
                incnt=0;
                inwrdcnt++;
            }
        }
        else if(((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) && s[i+1]==')' && i+1<n && ob==true){
            incnt++;
            if(mxcntIn<incnt){
                mxcntIn=incnt;
                incnt=0;
                inwrdcnt++;
            }
            else{
                incnt=0;
                inwrdcnt++;
            }
        }
        else if(s[i]==')'){
            ob=false;
            incnt=0;
        }
    }

    cout<<mxcntOut<<' '<<inwrdcnt;
    return 0;
}
