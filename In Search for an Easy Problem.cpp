#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,prev;
    cin>>n;
    bool flag=true;

    cin>>m;
    prev=m;
    if(prev==1){
        flag=false;
    }
    else{
        n--;
        while(n--){
            int x;
            cin>>x;
            if(x!=prev){
                flag=false;
                break;
            }
        }

    }

    if(flag==true){
        cout<<"EASY";
    }
    else{
        cout<<"HARD";
    }
    return 0;
}
