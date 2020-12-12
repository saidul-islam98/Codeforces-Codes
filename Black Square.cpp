#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,jules=0;
    cin>>a>>b>>c>>d;

    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            jules+=a;
        }
        else if(s[i]=='2'){
            jules+=b;
        }
        else if(s[i]=='3'){
            jules+=c;
        }
        else{
            jules+=d;
        }
    }

    cout<<jules;
    return 0;
}
