#include<bits/stdc++.h>

using namespace std;

int main(){
    int cnta=0;
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            cnta++;
        }
    }

    if(cnta>s.length()/2){
        cout<<s.length();
    }
    else{
        cout<<cnta*2-1;
    }
    return 0;
}
