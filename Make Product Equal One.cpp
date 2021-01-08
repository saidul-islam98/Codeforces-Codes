#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n];
    long long int cntneg=0,cntpos=0,cntz=0,total=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0) cntneg++;
        else if(a[i]>0) cntpos++;
        else cntz++;
    }

    if(cntneg%2==0){
        for(int i=0;i<n;i++){
            if(a[i]<0){
                total+=(abs(a[i])-1);
            }
            else if(a[i]>0){
                total+=(a[i]-1);
            }
        }
        total+=cntz;
    }
    else{
        if(cntz>0){
            for(int i=0;i<n;i++){
                if(a[i]>0){
                    total+=(a[i]-1);
                }
                else if(a[i]<0){
                    total+=(abs(a[i])-1);
                }
            }
            total+=cntz;
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]>0){
                    total+=(a[i]-1);
                }
                else if(a[i]<0 && cntneg>1){
                    total+=(abs(a[i])-1);
                    cntneg--;
                }
                else if(a[i]<0 && cntneg==1){
                    total+=(abs(a[i])+1);
                }
            }
        }
    }

    cout<<total;
    return 0;
}
