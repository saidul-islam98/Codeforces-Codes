#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int oddc=0,evenc=0;

    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        if(x%2==0)
            evenc++;
        else
            oddc++;
    }

    for(int i=0;i<m;i++){
        long long int x;
        cin>>x;
        if(x%2==0)
            evenc++;
        else
            oddc++;
    }

    int mn=min(oddc,evenc);
    mn=min(mn,n);
    mn=min(mn,m);
    cout<<mn;
    return 0;
}
