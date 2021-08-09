#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    string s,t;
    cin>>s>>t;

    int a[26]={0},b[26]={0};
    for(int i=0;i<n;i++){
        a[int(s[i])-97]++;
        b[int(t[i])-97]++;
    }

    bool possible=true;
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            possible=false;
            break;
        }
    }

    if(possible){
        vector<int> vc;
        for(int i=0;i<n;i++){
            int idx;
            if(s[i]!=t[i]){
                for(int j=i+1;j<n;j++){
                    if(s[j]==t[i]){
                        idx=j;
                        break;
                    }
                }
                for(int j=idx-1;j>=i;j--){
                    swap(s[j],s[j+1]);
                    vc.push_back(j);
                }
            }
        }
        if(s==t){
            cout<<vc.size()<<'\n';
            for(int i=0;i<vc.size();i++){
                cout<<vc[i]+1<<' ';
            }
        }
        else{
            cout<<-1;
        }
    }
    else{
        cout<<-1;
    }

    return 0;
}
