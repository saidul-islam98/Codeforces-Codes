#include<bits/stdc++.h>

using namespace std;

int main(){
    int bm[5][5];
    int i,j;
    int cnt=0;
    int x,y;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>bm[i][j];
            if(bm[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    cout<<x<<" "<<y<<endl;
    if(x>=2 && y>=2){
        cnt = (x-2)+(y-2);
    }
    else if(x<=2 && y<=2){
        cnt = (2-x)+(2-y);
    }
    else if(x>=2 && y<=2){
        cnt = (x-2)+(2-y);
    }
    else{
        cnt = (2-x)+(y-2);
    }
    cout<<cnt;

    return 0;
}
