#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s,ss1,ss2,ss3;
        cin>>s;

        if(s.length()>=2){
            ss1=s.substr(s.length()-2,s.length()-1);
        }
        if(s.length()>=4){
            ss2=s.substr(s.length()-4,s.length()-1);
        }
        if(s.length()>=5){
            ss3=s.substr(s.length()-5,s.length()-1);
        }

        if(ss1=="po" || s=="po"){
            cout<<"FILIPINO\n";
        }
        else if(ss2=="desu" || ss2=="masu" || s=="desu" || s=="masu"){
            cout<<"JAPANESE\n";
        }
        else if(ss3=="mnida" || s=="mnida"){
            cout<<"KOREAN\n";
        }
    }
    return 0;
}
