#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        cnt=cnt+val;
    }

    int temp=n+1;
    int test=cnt%temp;

    if(n==1 && test==0){
        cout<<"2";
    }
    else if(n==1 && test==1){
        cout<<"3";
    }
    else if(n==2 && test==0){
        cout<<"3";
    }
    else if(n==2 && test==1){
        cout<<"4";
    }
    else if(n==2 && test==2){
        cout<<"3";
    }
    else if(n==3 && test==0){
        cout<<"3";
    }
    else if(n==3 && test>=1){
        cout<<"4";
    }
    else if(temp-test>4){
        cout<<"5";
    }
    else{
        cout<<"4";
    }

    return 0;
}
