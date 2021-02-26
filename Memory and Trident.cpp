#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    if(s.length()%2!=0){
        cout<<-1;
    }
    else{
        int h=0,v=0,total=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R'){
                h++;
            }
            else if(s[i]=='L'){
                h--;
            }
            else if(s[i]=='U'){
                v++;
            }
            else{
                v--;
            }
        }

        h=abs(h);
        v=abs(v);
        if(h%2==0 && v%2==0){
            total=h/2+v/2;
        }
        else{
            if(h>=v){
                h-=1;
                v+=1;
                total=h/2+v/2;
            }
            else{
                h+=1;
                v-=1;
                total=h/2+v/2;
            }
        }
        cout<<total;
    }
    return 0;
}
