#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    int cu=0, cl=0;
    for(int i=0;i<s.length();i++){
        if(islower(s[i])){
            cl++;
        }
        else{
            cu++;
        }
    }
    //cout<<cl<<" "<<cu;
    if(cl>=cu){
        for(int c=0;c<s.length();c++){
            if(isupper(s[c])){
                s[c]=tolower(s[c]);
                cout<<s[c];
            }
            else{
                cout<<s[c];
            }
        }
    }
    else{
        for(int c=0;c<s.length();c++){
            if(islower(s[c])){
                s[c]=toupper(s[c]);
                cout<<s[c];
            }
            else{
                cout<<s[c];
            }
        }
    }

    return 0;
}
