#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cntodd=0,cnteven=0,sumeven=0,sumodd=0,total;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            cnteven++;
            sumeven+=a[i];
        }
        else{
            cntodd++;
            sumodd+=a[i];
        }
    }

    sort(a,a+n);

    if(cntodd==cnteven || abs(cntodd-cnteven)==1){
        total=0;
    }
    else if(cntodd==0){
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=a[i];
        }
        total=sum;
    }
    else if(cnteven==0){
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=a[i];
        }
        total=sum;
    }
    else{
        total=sumeven+sumodd;
        int mn=min(cntodd,cnteven);
        if(cntodd==mn){
            int iter1=cntodd,restsum=0;
            int iter2=cntodd+1;
            for(int i=n-1;iter1>0;i--){
                if(a[i]%2!=0){
                    restsum+=a[i];
                    a[i]=-1;
                    iter1--;
                }
            }
            for(int i=n-1;iter2>0;i--){
                if(a[i]%2==0){
                    restsum+=a[i];
                    a[i]=-1;
                    iter2--;
                }
            }

            total-=restsum;
        }
        else{
            int iter1=cnteven+1,restsum=0;
            int iter2=cnteven;
            for(int i=n-1;iter1>0;i--){
                if(a[i]%2!=0){
                    restsum+=a[i];
                    a[i]=-1;
                    iter1--;
                }
            }
            for(int i=n-1;iter2>0;i--){
                if(a[i]%2==0){
                    restsum+=a[i];
                    a[i]=-1;
                    iter2--;
                }
            }

            total-=restsum;
        }
    }
    cout<<total;
    return 0;
}
