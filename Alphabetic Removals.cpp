#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int a[26]={0},b[26]={0};
    for(int i=0;i<n;i++){
        a[int(s[i])-97]++;
    }

    for(int i=0;i<26;i++){
        if(a[i]>=k && k>0){
            b[i]=k;
            k-=a[i];
        }
        else if(k>0){
            b[i]=a[i];
            k-=a[i];
        }

        if(k==0){
            break;
        }
    }

//    for(int i=0;i<26;i++){
//        cout<<a[i]<<' '<<b[i]<<'\n';
//    }

    for(int i=0;i<n;i++){
        int val=int(s[i])-97;
        //cout<<val<<' ';
        if(b[val]>0){
            s[i]='#';
            //cout<<b[val]<<'\n';
            b[val]--;
        }
    }


    for(int i=0;i<n;i++){
        if(s[i]!='#'){
            cout<<s[i];
        }
    }
    return 0;
}
