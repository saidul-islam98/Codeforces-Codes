#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    bool flag=false;
    if(s.length()==1 && (s[0]>='A' && s[0]<='Z')){
        s[0]=tolower(s[0]);
        cout<<s;
    }
    else if(s.length()==1 && (s[0]>='a' && s[0]<='z')){
        s[0]=toupper(s[0]);
        cout<<s;
    }
    else{
        if(s[0]>='A' && s[0]<='Z'){
            for(int i=1;i<s.length();i++){
                if(s[i]>='A' && s[i]<='Z'){
                    flag=true;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                cout<<s;
            }
            else{
                for(int i=0;i<s.length();i++){
                    s[i]=tolower(s[i]);
                }
                cout<<s;
            }
        }
        else if(s[0]>='a' && s[0]<='z'){
            for(int i=1;i<s.length();i++){
                if(s[i]>='A' && s[i]<='Z'){
                    flag=true;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                cout<<s;
            }
            else{
                s[0]=toupper(s[0]);
                for(int i=1;i<s.length();i++){
                    s[i]=tolower(s[i]);
                }
                cout<<s;
            }
        }
    }
    return 0;
}
