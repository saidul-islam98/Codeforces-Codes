#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    while(t--){
        int n,cnt=0;
        cin>>n;

        int a[1005];
        int b[n];
        for(int i=0;i<1005;i++){
            a[i]=0;
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b[i]=x;
            a[x]++;
        }
        int cntevn=0,cntodd=0;
        for(int i=0;i<1005;i++){
            if(i%2==0){
                if(a[i]>0){
                    cntevn+=a[i];
                }
            }
            else{
                if(a[i]>0){
                    cntodd+=a[i];
                }
            }
        }

        if(abs(cntevn-cntodd)>=2){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(i%2==0 && b[i]%2!=0){
                    cnt++;
                }
                else if(i%2!=0 && b[i]%2==0){
                    cnt++;
                }
            }

            if(cnt==1){
                cout<<"-1"<<endl;
            }
            else{
                cnt=cnt/2;
                cout<<cnt<<endl;
            }
        }

    }
    return 0;
}
