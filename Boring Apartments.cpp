#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int len[]={0,1,3,6,10};
    while(t--){
        int x,sum;
        cin>>x;
        string s=to_string(x);
        int l=s.length();
        int y=int(s[0])-48;
        for(int i=1;i<=9;i++){
            if(y==i){
                sum=(y-1)*10+len[l];
                break;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
