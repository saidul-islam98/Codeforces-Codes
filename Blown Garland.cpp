#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    int kr=0,kg=0,kb=0,ky=0;
    map<int,char> mp;

    for(int i=0;i<s.length();i++){
        if(s[i]=='R'){
            mp[i%4]='R';
        }
        else if(s[i]=='G'){
            mp[i%4]='G';
        }
        else if(s[i]=='B'){
            mp[i%4]='B';
        }
        else if(s[i]=='Y'){
            mp[i%4]='Y';
        }
    }

    for(int i=0;i<s.length();i++){
        if(s[i]=='!'){
            if(mp[i%4]=='R'){
                kr++;
            }
            else if(mp[i%4]=='G'){
                kg++;
            }
            else if(mp[i%4]=='B'){
                kb++;
            }
            else if(mp[i%4]=='Y'){
                ky++;
            }
        }
    }

    cout<<kr<<' '<<kb<<' '<<ky<<' '<<kg;
    return 0;
}
