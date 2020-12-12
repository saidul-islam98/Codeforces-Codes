#include<bits/stdc++.h>

using namespace std;

int main(){
    string s="I hate it", st="I hate", ss="that", sss="I love", sit="it";
    int n;
    cin>>n;

    if(n==1){
        cout<<s;
        return 0;
    }
    else{
        cout<<st;
        for(int i=1;i<n;i++){
            if(i%2==0){
                cout<<" "<<ss<<" "<<st;
            }
            else{
                cout<<" "<<ss<<" "<<sss;
            }
        }
        cout<<" "<<sit;
    }
    return 0;
}
