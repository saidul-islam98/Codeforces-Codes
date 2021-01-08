#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int a[26]={0};
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        int x=int(s[i]-65);
        a[x]++;
    }

    int mn=999999999;
    bool flag=true;
    for(int i=0;i<k;i++){
        if(a[i]>0){
            if(mn>a[i]){
                mn=a[i];
            }
        }
        else{
            flag=false;
            break;
        }
    }

    if(flag==false){
        cout<<0;
    }
    else{
        cout<<mn*k;
    }
    return 0;
}
