#include<bits/stdc++.h>

using namespace std;
const int N = int(2e5)+9;
int a[N],b[N];
bool c[N];

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int pos=0;
    for(int i=0;i<n;i++){
        int x=b[i];
        if(c[x]){
            cout<<0<<' ';
            continue;
        }

        int cnt=0;
        while(1){
            cnt++;
            c[a[pos]]=true;
            if(a[pos]==x)
                break;
            pos++;
        }
        pos++;
        cout<<cnt<<' ';
    }
    return 0;
}
