#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    if(n==1){
        cout<<n<<'\n'<<'C';
    }
    else if(n%2==0){
        cout<<n*n/2<<'\n';
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    if(j%2==0){
                        cout<<'C';
                    }
                    else{
                        cout<<'.';
                    }
                }
            }
            else{
                for(int j=0;j<n;j++){
                    if(j%2!=0){
                        cout<<'C';
                    }
                    else{
                        cout<<'.';
                    }
                }
            }
            cout<<'\n';
        }
    }
    else if(n%2!=0){
        int x=n/2;
        int y=n%2+(n/2);
        cout<<(x*x+y*y)<<'\n';
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    if(j%2==0){
                        cout<<'C';
                    }
                    else{
                        cout<<'.';
                    }
                }
            }
            else{
                for(int j=0;j<n;j++){
                    if(j%2!=0){
                        cout<<'C';
                    }
                    else{
                        cout<<'.';
                    }
                }
            }
            cout<<'\n';
        }
    }
    return 0;
}
