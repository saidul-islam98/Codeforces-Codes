#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,t;
    cin>>s>>t;

    int cnt=1,i=0,j=0;

    while(i<t.length()){
        if(t[i]==s[j]){
            cnt++;
            i++;
            j++;
        }
        else{
            i++;
        }
    }

    cout<<cnt;
    return 0;
}
