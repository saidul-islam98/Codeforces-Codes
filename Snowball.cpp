#include<bits/stdc++.h>

using namespace std;

int main(){
    int w,h,u1,d1,u2,d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;

    for(int i=h;i>=1;i--){
        w+=i;
        if(i==d1){
            w-=u1;
            if(w<0)
                w=0;
        }
        else if(i==d2){
            w-=u2;
            if(w<0)
                w=0;
        }
    }

    cout<<w;
    return 0;
}
