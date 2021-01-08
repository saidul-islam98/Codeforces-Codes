#include<bits/stdc++.h>

using namespace std;

int main(){
    int s,v1,v2,t1,t2;
    int total1,total2;

    cin>>s>>v1>>v2>>t1>>t2;

    total1=s*v1+2*t1;
    total2=s*v2+2*t2;


    if(total1>total2) cout<<"Second";
    else if(total1<total2) cout<<"First";
    else cout<<"Friendship";

    return 0;
}
