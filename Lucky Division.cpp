#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n;

    k=n;
    bool flag=true;
    while(k>0){
        if(k%10==4 || k%10==7){
            k=k/10;
        }
        else{
            flag=false;
            break;
        }
    }


    if(flag==true){
        cout<<"YES";
    }
    else{
        if((n%4==0 && n>4) || (n%7==0 && n>7) || (n%44==0 && n>44) || (n%47==0 && n>47) || (n%74==0 && n>74) || (n%77==0 && n>77)){
            if((n/4)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/7)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/44)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/47)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/74)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/77)%2==0){
                cout<<"YES";
                return 0;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
        else if((n%444==0 && n>444) || (n%447==0 && n>447) || (n%477==0 && n>477) || (n%474==0 && n>474) || (n%744==0 && n>744) || (n%774==0 && n>774) || (n%777==0 && n>777) || (n%747==0 && n>747)){
            if((n/444)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/447)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/474)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/477)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/777)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/747)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/744)%2==0){
                cout<<"YES";
                return 0;
            }
            else if((n/774)%2==0){
                cout<<"YES";
                return 0;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}
