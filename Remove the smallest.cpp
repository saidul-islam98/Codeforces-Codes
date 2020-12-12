#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    bool flag=false;
    cin>>t;
    n=t;
    vector<string> s;
    while(n--){
        int x;
        cin>>x;
        if(x==1){
            int num[x];
            for(int i=0;i<x;i++){
                cin>>num[i];
            }
            s.push_back("YES");
        }
        else{
            int num[x];
            for(int i=0;i<x;i++){
                cin>>num[i];
            }

            sort(num, num+x);
            for(int i=0;i<x-1;i++){
                if(abs(num[i]-num[i+1])<=1){
                    num[i]=0;
                    flag=true;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                s.push_back("NO");
            }
            else{
                s.push_back("YES");
            }
        }

    }

    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }


    return 0;
}
