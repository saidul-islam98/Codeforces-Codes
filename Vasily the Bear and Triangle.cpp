#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int x,y,x1,y1,x2,y2;
    cin>>x>>y;

    if(x<0 && y<0){
        x1=(-1)*(abs(x)+abs(y));
        y1=0;
        x2=0;
        y2=x1;
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
    }
    else if(x>0 && y>0){
        x1=0;
        y1=x+y;
        x2=y1;
        y2=0;
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
    }
    else if(x<0 && y>0){
        x1=(-1)*(abs(x)+y);
        y1=0;
        x2=0;
        y2=abs(x1);
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
    }
    else if(x>0 && y<0){
        x1=0;
        y1=(-1)*(x+abs(y));
        x2=(x+abs(y));
        y2=0;
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
    }
    return 0;
}
