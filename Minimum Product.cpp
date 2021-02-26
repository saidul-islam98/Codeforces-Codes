#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;

        long long int prod1=0,prod2=0,prod3=0,prod4=0,fa1,fb1,fa2,fb2,ans1,ans2,res;
        if(a-n>=x){
            long long int tmpn=n;
            fa1=a-tmpn;
            fb1=b;
            prod1=fa1*fb1;
        }
        else if(a-n<x){
            long long int tmpn=n;
            fa1=x;
            tmpn=n-(a-x);
            if(b-tmpn>=y){
                fb1=b-tmpn;
            }
            else{
                fb1=y;
            }
            prod2=fa1*fb1;
        }


        if(b-n>=y){
            long long int tmpn=n;
            fb2=b-tmpn;
            fa2=a;
            prod3=fa2*fb2;
        }
        else if(b-n<y){
            long long int tmpn=n;
            fb2=y;
            tmpn=n-(b-y);
            if(a-tmpn>=x){
                fa2=a-tmpn;
            }
            else{
                fa2=x;
            }
            prod4=fa2*fb2;
        }

        if(prod1==0){
            if(prod3==0){
                res=min(prod2,prod4);
            }
            else if(prod4==0){
                res=min(prod2,prod3);
            }
        }
        else if(prod2==0){
            if(prod3==0){
                res=min(prod1,prod4);
            }
            else if(prod4==0){
                res=min(prod1,prod3);
            }
        }

        cout<<res<<'\n';
    }
    return 0;
}
