#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,v;
    cin>>n>>v;

    int i=2,bucks=v;
    if(n<=v){
        cout<<n-1;
    }
    else{
        while(1){
            if(n-v>1){
               n--;
               bucks+=i;
               i++;
            }
            else{
                break;
            }
        }
        cout<<bucks;
    }

    return 0;
}
