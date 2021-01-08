#include<bits/stdc++.h>

using namespace std;

int a[100005],b[100005];

int main(){
    int n,cnt=0;
    cin>>n;

    bool flag=false,flag2=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]!=i){
            flag=true;
            b[a[i]]=i;
        }
        else{
            cnt++;
        }
    }


    if(flag==false){
        cout<<cnt;
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]!=i){
				if(b[i]==a[i]){
					flag2=true;
					break;
				}
			}
        }

        if(flag2==true){
            cout<<cnt+2;
        }
        else{
            cout<<cnt+1;
        }
    }

    return 0;
}
