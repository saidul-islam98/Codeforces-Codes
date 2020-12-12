#include<bits/stdc++.h>

using namespace std;


long long int mod(long long int a, long long int m){
    return (a%m+m)%m;
}

int main(){
    long long int x,y,n,m,prev,curr,next;
    long long int md=1000000007;
    cin>>x>>y;
    cin>>n;

    if(n==1){
        if(x<0){
            next=mod(x,md);
            cout<<next;
        }
        else{
            next=x%md;
            cout<<next;
        }
    }
    else if(n==2){
        if(y<0){
            next=mod(y,md);
            cout<<next;
        }
        else{
            next=y%md;
            cout<<next;
        }
    }
    else{
        if((n+2)%3==0 && (n+2)%2==0){
            next=(-1)*x;
            if(next<0){
                next=mod(next,md);
                cout<<next;
            }
            else{
                next=next%md;
                cout<<next;
            }
        }
        else if((n+2)%3==0 && (n+2)%2!=0){
            next=x;
            if(next<0){
                next=mod(next,md);
                cout<<next;
            }
            else{
                next=next%md;
                cout<<next;
            }
        }
        else if((n+1)%3==0 && (n+1)%2==0){
            next=(-1)*y;
            if(next<0){
                next=mod(next,md);
                cout<<next;
            }
            else{
                next=next%md;
                cout<<next;
            }
        }
        else if((n+1)%3==0 && (n+1)%2!=0){
            next=y;
            if(next<0){
                next=mod(next,md);
                cout<<next;
            }
            else{
                next=next%md;
                cout<<next;
            }
        }
        else if(n%3==0 && n%2!=0){
            if((y-x)<0){
                next=mod((y-x),md);
                cout<<next;
            }
            else{
                next=(y-x)%md;
                cout<<next;
            }
        }
        else if(n%3==0 && n%2==0){
            if((x-y)<0){
                next=mod((x-y),md);
                cout<<next;
            }
            else{
                next=(x-y)%md;
                cout<<next;
            }
        }
    }

    return 0;
}
