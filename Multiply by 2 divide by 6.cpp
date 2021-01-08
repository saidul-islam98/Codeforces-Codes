#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int x,scnt=0,tcnt=0;
        cin>>x;

        bool flag=true;

        if(x==1){
            cout<<0<<'\n';
        }
        else{
            while(x>0){
                if(x%6==0){
                    x=x/6;
                    scnt++;
                }
                else{
                    x=x*2;
                    tcnt++;
                }

                if(x==1){
                    flag=false;
                    break;
                }
            }

            if(flag==false)
                cout<<scnt+tcnt<<'\n';
            else
                cout<<-1<<'\n';
        }
    }
    return 0;
}
