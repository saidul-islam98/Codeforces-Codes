#include<bits/stdc++.h>

using namespace std;

int main(){
    string s="12345678910111213141516171819";
    for(int i=20;i<1000;i++){
        string ss=to_string(i);
        s+=ss;
    }
    int n;
    cin>>n;
    char c;
    for(int i=0;i<s.length();i++){
        if(i+1==n){
            c=s[i];
            break;
        }
    }
    cout<<c;
    return 0;
}
