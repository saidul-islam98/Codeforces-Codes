#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,prev,curr,sum=0,t;
    cin>>n;
    t=n;
    int x;
    cin>>x;
    prev=x;
    sum+=prev;
    t--;

    while(t--){
        cin>>curr;
        if(prev<curr){
            sum+=(curr-prev);
            sum+=1;
        }
        else if(prev==curr){
            sum+=1;
        }
        else{
            sum+=(prev-curr);
            sum+=1;
        }
        prev=curr;
    }

    sum+=n;
    cout<<sum;
    return 0;
}
