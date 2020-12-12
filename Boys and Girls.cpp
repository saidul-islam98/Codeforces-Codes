#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin>>n>>m;
    if(n>=m){
        for(int i=0;i<n;i++){
            cout<<'B';
            if(m>0){
                cout<<'G';
                m--;
            }
        }
    }
    else{
        for(int i=0;i<m;i++){
            cout<<'G';
            if(n>0){
                cout<<'B';
                n--;
            }
        }
    }

    return 0;
}
