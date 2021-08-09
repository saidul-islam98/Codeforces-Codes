#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[4*n+1];
        for(int i=1;i<=4*n;i++){
            cin>>a[i];
        }

        sort(a+1,a+4*n+1);
        long long int area=a[1]*a[4*n];
        bool isPossible=false;

        for(int i=1;i<=n;i++){
            if((a[(2*i)-1]==a[2*i]) && a[(4*n-2*i)+1]==a[(4*n-2*i)+2] && a[(4*n-2*i)+2]*a[(2*i)-1]==area){
                isPossible=true;
            }
            else{
                isPossible=false;
                break;
            }
        }

        if(isPossible){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
