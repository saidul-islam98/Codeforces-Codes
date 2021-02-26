#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int a[n],b[n];
        bool isPossible=true,isOne=false,isZero=false,ismOne=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        if(a[0]!=b[0]){
            isPossible=false;
        }
        else{
            if(a[0]==1){
                isOne=true;
            }
            else if(a[0]==0){
                isZero=true;
            }
            else if(a[0]==-1){
                ismOne=true;
            }

            for(int i=1;i<n;i++){
                if(a[i]<b[i] && a[i]>=0){
                    if(isOne==false){
                        isPossible=false;
                        break;
                    }
                    else{
                        if(a[i]==0){
                            isZero=true;
                        }
                    }
                }
                else if(a[i]<b[i] && a[i]<0){
                    if(isOne==false){
                        isPossible=false;
                        break;
                    }
                    else{
                        ismOne=true;
                    }
                }
                else if(a[i]>b[i] && a[i]>=0){
                    if(ismOne==false){
                        isPossible=false;
                        break;
                    }
                    else{
                        if(a[i]==1){
                            isOne=true;
                        }
                        else{
                            isZero=true;
                        }
                    }
                }
                else if(a[i]>b[i] && a[i]<0){
                    if(ismOne==false){
                        isPossible=false;
                        break;
                    }
                }
                else if(a[i]==b[i]){
                    if(a[i]==0){
                        isZero=true;
                    }
                    else if(a[i]==1){
                        isOne=true;
                    }
                    else{
                        ismOne=true;
                    }
                }
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
