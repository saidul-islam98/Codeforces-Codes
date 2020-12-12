#include<bits/stdc++.h>

using namespace std;

int main(){
    int al[124];
    int as,n,k,flag=0;
    for(int i=0;i<124;i++){
        al[i]=0;
    }

    cin>>n;
    k=n;
    vector<char> c;
    char x;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        as=(int)s[i];
        al[as]++;
    }

    for(int i=0;i<124;i++){
        if(al[i]>0 && al[i]%n==0){
            x=(char)i;
            for(int j=0;j<al[i]/k;j++){
                c.push_back(x);
            }
            flag=1;
        }
        else if(al[i]>0 && al[i]%n!=0){
            flag=0;
            break;
        }
    }

    if(flag==1){
        while(k--){
            for(auto i=c.begin();i!=c.end();i++){
                cout<<*i;
            }
        }
    }
    else{
        cout<<"-1";
    }
    return 0;
}
