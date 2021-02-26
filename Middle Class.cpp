#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,x;
        cin>>n>>x;

        long long int a[n+1];
        int cnt=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        sort(a+1,a+n+1,greater<int>());
        double avg,sum=0;
        for(int i=1;i<=n;i++){
            sum+=a[i];
            avg=sum/i;
            if(avg<x){
                break;
            }
            else{
                cnt++;
            }
        }

        cout<<cnt<<'\n';
    }
    return 0;
}
