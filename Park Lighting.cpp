#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        long long int sq=x*y;
        if(sq%2==0){
            cout<<sq/2<<"\n";
        }
        else{
            cout<<(sq/2)+1<<"\n";
        }
    }
    return 0;
}
