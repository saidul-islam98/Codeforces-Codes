#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,cnt=0;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0;i<s.length()-2;i++){
        int x=0;
        bool flag=false;
        while(x<3){
            if(s[i+x]=='x') x++;
            else{
                flag=true;
                break;
            }
        }
        if(flag==false) cnt++;
    }
    cout<<cnt;
    return 0;
}
