#include<bits/stdc++.h>

using namespace std;

int main(){
    int r,d;
    cin>>r>>d;

    int m,cnt=0;
    cin>>m;

    while(m--){
        int x,y,pr;
        cin>>x>>y>>pr;

        if(sqrt((x*x)+(y*y))+pr<=r && sqrt((x*x)+(y*y))>=r-d+pr){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}
