#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;

    long long int top,left,bot,right,total;

    if(w1==w1 && h1==h2){
        top=w1;
        bot=w1;
        left=h1+h2+2;
        right=h1+h2+2;
        total=top+left+bot+right;
    }
    else if(w1==w1 && h1!=h2){
        top=w1;
        bot=w1;
        left=h1+h2+2;
        right=h1+h2+2;
        total=top+left+bot+right;
    }
    else{
        left=h1+h2+2;
        bot=w1+1;
        top=w2+1;
        if(w1==w2){
            right=w1;
        }
        else{
            right=w1-w2+h1+h2;
        }
        total=top+left+bot+right;
    }

    cout<<total;
    return 0;
}
