#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char q[n];
    char f[n];
    cin>>q;
    //cout<<q;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(q[j]=='B' && q[j+1]=='G'){
                q[j]='G';
                q[j+1]='B';
                j++;
            }
        //cout<<f<<endl;
        }
    }
    cout<<q;
    return 0;
}
