#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int x1,y1,x2,y2,cnt=0;
        cin>>x1>>y1>>x2>>y2;

        if(x1==x2){
            cnt=abs(y1-y2);
        }
        else if(y1==y2){
            cnt=abs(x1-x2);
        }
        else if(x1!=x2 && y1!=y2){
            cnt=abs(x1-x2)+abs(y1-y2)+2;
        }

        cout<<cnt<<'\n';
    }
    return 0;
}
