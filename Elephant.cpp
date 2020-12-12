#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,cnt=0;
    cin>>x;
    while(1){
        if(x<=0){
            break;
        }
        else{
            if(x-5>=0){
                x-=5;
                cnt++;
            }
            else if(x-4>=0){
                x-=4;
                cnt++;
            }
            else if(x-3>=0){
                x-=3;
                cnt++;
            }
            else if(x-2>=0){
                x-=2;
                cnt++;
            }
            else if(x-1>=0){
                x-=1;
                cnt++;
            }
        }
    }

    cout<<cnt;
    return 0;
}
