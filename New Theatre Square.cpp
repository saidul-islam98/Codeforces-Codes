#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m,x,y,cost1=0,cost2=0;
        cin>>n>>m>>x>>y;

        char c[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>c[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;){
                if(c[i][j]=='.' && c[i][j+1]=='.' && j+1<m){
                    cost1+=(x*2);
                    cost2+=y;
                    j+=2;
                }
                else if(c[i][j]=='.'){
                    cost1+=x;
                    cost2+=x;
                    j++;
                }
                else{
                    j++;
                }
            }
        }

        if(cost1<=cost2){
            cout<<cost1<<'\n';
        }
        else{
            cout<<cost2<<'\n';
        }

    }
    return 0;
}
