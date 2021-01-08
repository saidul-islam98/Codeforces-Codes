#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int s,a,b,c;
        cin>>s>>a>>b>>c;

        long long int og=s/c,total;
        if(og<a)
            total=og;
        else
            total=og+(b*(og/a));
        cout<<total<<'\n';
    }
    return 0;
}
