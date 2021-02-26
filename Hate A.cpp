#include<bits/stdc++.h>

using namespace std;

int main(){
    string t;
    cin>>t;

    string s="",str="";
    int n=t.length(),idx=-1;
    for(int i=0;i<t.length();i++){
        s+=t[i];
        if(t[i]!='a'){
            str+=t[i];
        }
        if(s.length()+str.length()==t.length())
            break;
    }

    if(t==s+str){
        cout<<s;
    }
    else{
        cout<<":(";
    }
    return 0;
}
