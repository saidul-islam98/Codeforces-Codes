#include<bits/stdc++.h>

using namespace std;

int main(){
    int x=0,y=0,k;
    int n,cnt=0;
    cin>>n;

    char ch;
    cin>>ch;
    if(ch=='R'){
        k=1;
        n--;
        x++;
    }
    else{
        k=2;
        n--;
        y++;
    }

    if(k==1){
        while(n--){
            char c;
            cin>>c;
            if(c=='R'){
                x++;
                if(x>y && k==2){
                    cnt++;
                    k=1;
                }
            }
            else{
                y++;
                if(x<y && k==1){
                    cnt++;
                    k=2;
                }
            }
        }
    }
    else if(k==2){
        while(n--){
            char c;
            cin>>c;
            if(c=='R'){
                x++;
                if(x>y && k==2){
                    cnt++;
                    k=1;
                }
            }
            else{
                y++;
                if(x<y && k==1){
                    cnt++;
                    k=2;
                }
            }
        }
    }


    cout<<cnt;
    return 0;
}
