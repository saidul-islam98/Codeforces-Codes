#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    /* 2 --> 2,4,8,6
       3 --> 3,9,7,1
       4 --> 4,6
    */
    long long int n,one,two,three,four;
    if(s.length()>1){
        n=(int(s[s.length()-2])-48)*10+(int(s[s.length()-1])-48);
    }
    else{
        n=(int(s[s.length()-1])-48);
    }

    if(n%4==0){
        n=4;
    }

    one=1;
    two=n%4;
    two=pow(2,two);
    three=n%4;
    three=pow(3,three);
    four=n%4;
    four=pow(4,four);

    cout<<(one+two+three+four)%5;
    return 0;
}
