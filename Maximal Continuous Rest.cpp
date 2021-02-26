#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=1,mx=-9999999;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int mxelm=*max_element(a,a+n);

    if(mxelm==0)
        cout<<0;
    else{
        if(a[0]==1 && a[n-1]==1 && n>1){
            int idx1,idx2,tmpmx=-9999999,tmpmx2=-9999999;
            for(int i=0;i<n-1;i++){
                if(a[i]==a[i+1] && a[i]==1){
                    cnt++;
                }
                else{
                    if(tmpmx<cnt)
                        tmpmx=cnt;
                    cnt=1;
                    idx1=i;
                    break;
                }
            }
            for(int i=n-1;i>=idx1;i--){
                if(a[i]==a[i-1] && a[i]==1){
                    cnt++;
                }
                else{
                    if(tmpmx2<cnt)
                        tmpmx2=cnt;
                    cnt=1;
                    idx2=i;
                    break;
                }
            }

            mx=tmpmx+tmpmx2;
            for(int i=idx1;i<idx2;i++){
                if(a[i]==a[i+1] && a[i]==1){
                    cnt++;
                }
                else{
                    if(mx<cnt)
                        mx=cnt;
                    cnt=1;
                }
            }

            if(mx<cnt)
                mx=cnt;

            cout<<mx;
        }
        else{
            for(int i=0;i<n-1;i++){
                if(a[i]==a[i+1] && a[i]==1){
                    cnt++;
                }
                else{
                    if(mx<cnt)
                        mx=cnt;
                    cnt=1;
                }
            }
            if(mx<cnt)
                mx=cnt;

            cout<<mx;
        }
    }

    return 0;
}
