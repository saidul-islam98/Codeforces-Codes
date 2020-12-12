#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,val,cnt=2,cnt2=2;
    cin>>n;
    k=n*2+1;
    int m=n;
    for(int i=0;i<k;i++){
        if(i<=n){
            int cnth=0;
            for(int j=0;j<n*2-i*2;j++){
                cnth++;
                cout<<" ";
            }
            for(int j=0;j<=n*2-cnth;j++){
                if(j<i){
                    cout<<j;
                    cout<<" ";
                    val=j;
                }
                else if(j==i && j>0){
                    cout<<j;
                    cout<<" ";
                    val=j;
                }
                else if(j==0){
                    cout<<j;
                }
                else{
                    if(val==1){
                        cout<<--val;
                    }
                    else if(val>1){
                        cout<<--val<<" ";
                    }
                    else{
                        break;
                    }
                }
            }
            cout<<endl;
        }
        else{
            int cnth=0;
            for(int j=0;j<i*2-n*2-1;j++){
                cnth++;
                cout<<" ";
            }

            for(int j=0;j<=n*2-cnth;j++){
                if(j<m){
                    cout<<" ";
                    cout<<j;
                    val=j;
                }
                else{
                    if(val>0){
                        cout<<" "<<--val;
                    }
                    else{
                        break;
                    }
                }
            }
            cout<<endl;
            m=m-1;
        }

    }
    return 0;
}
