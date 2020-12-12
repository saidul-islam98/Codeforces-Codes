#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    int cnt=0;
    int a=1;
    int z=int(s[0])-97+1;

    if(z<=13){
        cnt+=(z-a);
    }
    else{
        cnt+=(26-z)+a;
    }
    for(int i=0;i<s.length()-1;i++){
        int x=int(s[i])-97+1;
        int y=int(s[i+1])-97+1;
        if(x<13 && y>13){
            if((x+(26-y))<(y-x)){
                cnt+=x+(26-y);
            }
            else{
                cnt+=(y-x);
            }
        }
        else if(x>13 && y<13){
            if((y+(26-x))<(x-y)){
                cnt+=y+(26-x);
            }
            else{
                cnt+=(x-y);
            }
        }
        else if(x==y){
            continue;
        }
        else{
            cnt+=abs(x-y);
        }
    }

    cout<<cnt;
    return 0;
}
