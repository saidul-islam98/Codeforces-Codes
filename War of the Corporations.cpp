#include<bits/stdc++.h>

using namespace std;

int main(){
    string go,ppl;
    cin>>go>>ppl;

    int cnt=0;
    for(int i=0;i<go.length();){
        string st="";
        for(int j=i;j<i+ppl.length();j++){
            st+=go[j];
        }
        if(ppl.compare(st)==0){
            cnt++;
            i+=ppl.length();
        }
        else{
            i++;
        }
    }

    cout<<cnt;
    return 0;
}
