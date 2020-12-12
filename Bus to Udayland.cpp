#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string> v;
    bool flag=false;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            if(v[i][j]==v[i][j+1] && v[i][j]=='O'){
                flag=true;
                v[i][j]='+';
                v[i][j+1]='+';
                break;
            }
        }
        if(flag==true){
            break;
        }
    }


    if(flag==true){
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            cout<<v[i]<<'\n';
        }
    }
    else{
        cout<<"NO";
    }
    return 0;
}
