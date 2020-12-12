#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a,b,c,n,k,mx=-9999999;
        cin>>a>>b>>c>>n;
        k=n;
        if(a==b && b==c){
            if(n%3==0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            if(a>=b && a>=c){
                mx=a;
            }
            else if(b>=a && b>=c){
                mx=b;
            }
            else{
                mx=c;
            }

            if(mx==a){
                long long int x,y;
                x=a-b;
                y=a-c;
                k=k-(x+y);
                if(k<0){
                    cout<<"NO\n";
                }
                else if(k>=0 && k%3==0){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
            else if(mx==b){
                long long int x,y;
                x=b-a;
                y=b-c;
                k=k-(x+y);
                if(k<0){
                    cout<<"NO\n";
                }
                else if(k>=0 && k%3==0){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
            else if(mx==c){
                long long int x,y;
                x=c-a;
                y=c-b;
                k=k-(x+y);
                if(k<0){
                    cout<<"NO\n";
                }
                else if(k>=0 && k%3==0){
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
