#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int x,y;
        cin>>x>>y;
        if(x==y){
            cout<<"0"<<"\n";
        }
        else if(x%2==0 && y%2==0){
            if(x>y){
                cout<<"1"<<"\n";
            }
            else{
                cout<<"2"<<"\n";
            }
        }
        else if(x%2==0 && y%2!=0){
            if(x>y){
                cout<<"2"<<"\n";
            }
            else{
                cout<<"1"<<"\n";
            }
        }
        else if(x%2!=0 && y%2==0){
            if(x>y){
                cout<<"2"<<"\n";
            }
            else{
                cout<<"1"<<"\n";
            }
        }
        else if(x%2!=0 && y%2!=0){
            if(x>y){
                cout<<"1"<<"\n";
            }
            else{
                cout<<"2"<<"\n";
            }
        }
    }
    return 0;
}
