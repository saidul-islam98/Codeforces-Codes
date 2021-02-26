#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,st;
    cin>>s;

    st=s;
    for(int i=s.length()-1;i>=0;i--){
        st+=s[i];
    }

    cout<<st;
    return 0;
}
