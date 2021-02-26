#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<char> c;
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        c.push_back(ch);
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
            reverse(c.begin(),c.begin()+i);
        }
    }
    reverse(c.begin(),c.end());

    for(int i=0;i<n;i++){
        cout<<c[i];
    }
    return 0;
}
