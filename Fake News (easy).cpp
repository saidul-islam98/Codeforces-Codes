#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    bool h[5];
    memset(h,false,sizeof(h));
    int cnt=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='h' && h[0]==false){
            h[0]=true;
            cnt++;
        }
        else if(s[i]=='e' && h[0]==true && h[1]==false){
            h[1]=true;
            cnt++;
        }
        else if(s[i]=='i' && h[1]==true && h[2]==false){
            h[2]=true;
            cnt++;
        }
        else if(s[i]=='d' && h[2]==true && h[3]==false){
            h[3]=true;
            cnt++;
        }
        else if(s[i]=='i' && h[3]==true && h[4]==false){
            h[4]=true;
            cnt++;
        }

        if(cnt==5){
            break;
        }
    }

    if(h[4]==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
