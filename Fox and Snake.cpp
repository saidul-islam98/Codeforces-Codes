#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                int k=i/2;
                if(k%2!=0 && j<m-1){
                    cout<<".";
                }
                else if(k%2!=0 && j==m-1){
                    cout<<"#";
                }
                else if(k%2==0 && j==0){
                    cout<<"#";
                }
                else if(k%2==0 && j>0){
                    cout<<".";
                }

            }
            else{
                cout<<"#";
            }
        }
        cout<<endl;
    }
    return 0;
}
