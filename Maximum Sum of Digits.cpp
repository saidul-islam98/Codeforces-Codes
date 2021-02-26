#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    string s=to_string(n);
    int len=s.length();
    long long int x=9;
    for(int i=1;i<len-1;i++){
        x=x*10+9;
    }

    long long int y=n-x;

    long long int sum=0;
    while(y){
        sum+=(y%10);
        y/=10;
    }
    sum+=(9*(len-1));

    if(n<=9)
        cout<<n;
    else
        cout<<sum;
    return 0;
}
