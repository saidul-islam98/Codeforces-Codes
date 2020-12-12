#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;

    bool flag=false;
    vector<int> a,b;
    for(int i=0;i<s.length()/2;i++){
        int x;
        x=(int)s[i] - 48;
        a.push_back(x);
    }
    for(int i=s.length()/2;i<s.length();i++){
        int x;
        x=(int)s[i] - 48;
        b.push_back(x);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i=0;i<a.size();i++){
        if(a[i]<b[i]){
            flag=true;
        }
        else{
            flag=false;
            break;
        }
    }

    if(flag==false){
        for(int i=0;i<a.size();i++){
            if(a[i]>b[i]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
    }


    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
