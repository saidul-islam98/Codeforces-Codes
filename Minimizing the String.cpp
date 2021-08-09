#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,mx=-1,idx=-1;
    cin>>n;

    string s;
    cin>>s;

    bool once=false;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]>s[i+1]){
            once=true;
            idx=i;
            break;
        }
    }


    if(once){
        for(int i=0;i<s.length();i++){
            if(i!=idx)
                cout<<s[i];
        }
    }
    else{
        for(int i=0;i<s.length()-1;i++){
            cout<<s[i];
        }
    }
    return 0;
}
