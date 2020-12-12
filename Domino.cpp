#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int k=0,sumone=0,sumtwo=0;

    for(int i=0;i<n;i++){
        int x,y,j;
        cin>>x>>y;
        if(x%2!=0){
            sumone++;
            j=i;
        }
        if(y%2!=0){
            sumtwo++;
            if(j==i){
                k++;
            }
        }
    }

    if(sumone==0 && sumtwo==0){
        cout<<"0";
    }
    else if(sumone%2==0 && sumtwo%2==0){
        cout<<"0";
    }
    else if(sumone==1 && sumtwo==1 && k%2!=0){
        cout<<"-1";
    }
    else if(k==n && k%2!=0){
        cout<<"-1";
    }
    else if((sumone+sumtwo)%2!=0){
        cout<<"-1";
    }
    else if((sumone+sumtwo)%2==0){
        cout<<"1";
    }

    return 0;
}
