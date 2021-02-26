#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a,b;
    cin>>a>>b;

    while(1){
        if(a>=2*b){
            long long int x=a/b;
            if(x%2==0){
                a-=(x*b);
            }
            else{
                a-=((x-1)*b);
            }
        }
        else if(b>=2*a){
            long long int y=b/a;
            if(y%2==0){
                b-=(y*a);
            }
            else{
                b-=((y-1)*a);
            }
        }
        else{
            break;
        }

        if(a<=0 || b<=0){
            break;
        }
    }

    cout<<a<<' '<<b;
    return 0;
}
