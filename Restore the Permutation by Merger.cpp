#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,k;
    cin>>t;
    k=t;

    while(t--){
        int n,cnt=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=-1;
        }
        for(int i=0;i<2*n;i++){
            bool flag=false;
            int x;
            cin>>x;
            if(cnt>=0){
                int z=cnt,j=0;
                while(z--){
                    if(a[j]==x){
                        flag=true;
                        break;
                    }
                    else{
                        j++;
                    }
                }
                if(flag==false){
                    a[cnt]=x;
                    cnt++;
                }
            }
        }


        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
