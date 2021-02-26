#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;

    while(q--){
        int n;
        cin>>n;

        int a[n+1],b[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        int j,cnt;
        for(int i=1;i<=n;i++){
            cnt=1;
            j=a[i];
            while(1){
                if(a[j]==i && cnt==1 && a[i]==i){
                    b[i]=cnt;
                    break;
                }
                else if(a[j]==i && cnt==1 && a[i]!=i){
                    cnt++;
                    b[i]=cnt;
                    break;
                }
                else if(a[j]==i && cnt>1){
                    cnt++;
                    b[i]=cnt;
                    break;
                }
                else{
                    cnt++;
                    j=a[j];
                }
            }
        }

        for(int i=1;i<=n;i++){
            cout<<b[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
