#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,cnt=0;
        cin>>n;
        bool flag=false;

        if(n==1) cout<<0<<'\n';
        else{
            if(n%5==0){
                while(n!=1){
                    if(n%5==0){
                        n=(4*n)/5;
                        cnt++;
                    }
                    else if(n%3==0){
                        n=(2*n)/3;
                        cnt++;
                    }
                    else if(n%2==0){
                        n=n/2;
                        cnt++;
                    }
                    else if(n%5!=0 && n%3!=0 && n%2!=0 && n!=1){
                        cout<<-1<<'\n';
                        flag=true;
                        break;
                    }
                }
                if(flag==false)
                    cout<<cnt<<'\n';
            }
            else if(n%3==0){
                while(n!=1){
                    if(n%5==0){
                        n=(4*n)/5;
                        cnt++;
                    }
                    else if(n%3==0){
                        n=(2*n)/3;
                        cnt++;
                    }
                    else if(n%2==0){
                        n=n/2;
                        cnt++;
                    }
                    else if(n%5!=0 && n%3!=0 && n%2!=0 && n!=1){
                        cout<<-1<<'\n';
                        flag=true;
                        break;
                    }
                }
                if(flag==false)
                    cout<<cnt<<'\n';
            }
            else if(n%2==0){
                while(n!=1){
                    if(n%5==0){
                        n=(4*n)/5;
                        cnt++;
                    }
                    else if(n%3==0){
                        n=(2*n)/3;
                        cnt++;
                    }
                    else if(n%2==0){
                        n=n/2;
                        cnt++;
                    }
                    else if(n%5!=0 && n%3!=0 && n%2!=0 && n!=1){
                        cout<<-1<<'\n';
                        flag=true;
                        break;
                    }
                }
                if(flag==false)
                    cout<<cnt<<'\n';
            }
            else{
                cout<<-1<<'\n';
            }
        }
    }
    return 0;
}
