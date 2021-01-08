#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a,x,b;
        cin>>a>>b;

        if(a==b){
            cout<<0<<'\n';
        }
        else if(a<b){
            long long int cnt=0;
            x=b-a;
            if(x>5 && x%5!=0){
                cnt+=x/5;
                x=x%5;
                if(x>2 && x%2!=0){
                    cnt+=x/2+1;
                }
                else if(x>=2 && x%2==0){
                    cnt+=x/2;
                }
                else{
                    cnt+=x;
                }
            }
            else if(x>=5 && x%5==0){
                cnt=x/5;
            }
            else if(x>=2 && x<5){
                if(x%2!=0){
                    cnt=x/2+1;
                }
                else{
                    cnt=x/2;
                }
            }
            else{
                cnt=1;
            }
            cout<<cnt<<'\n';
        }
        else{
            long long int cnt=0;
            x=a-b;
            if(x>5 && x%5!=0){
                cnt+=x/5;
                x=x%5;
                if(x>2 && x%2!=0){
                    cnt+=x/2+1;
                }
                else if(x>=2 && x%2==0){
                    cnt+=x/2;
                }
                else{
                    cnt+=x;
                }
            }
            else if(x>=5 && x%5==0){
                cnt=x/5;
            }
            else if(x>=2 && x<5){
                if(x%2!=0){
                    cnt=x/2+1;
                }
                else{
                    cnt=x/2;
                }
            }
            else{
                cnt=1;
            }
            cout<<cnt<<'\n';
        }

    }
    return 0;
}
