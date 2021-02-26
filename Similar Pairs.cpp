#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n],evn=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                evn++;
            }
            else{
                odd++;
            }
        }

        if(evn%2!=odd%2){
            cout<<"NO\n";
        }
        else{
            if(evn%2==0){
                cout<<"YES\n";
            }
            else{
                bool isPair=false;
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        if(a[i]%2!=a[j]%2 && abs(a[i]-a[j])==1){
                            isPair=true;
                            break;
                        }
                    }
                }
                if(isPair){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
        }
    }
    return 0;
}
