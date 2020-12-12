#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> s;
    int x=0;
    for(int i=0;i<n;i++){
        string st;
        cin>>st;
        s.push_back(st);
        if((s[i][1]=='+' && s[i][2]=='+') || (s[i][0]=='+' && s[i][1]=='+')){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;
    return 0;
}
