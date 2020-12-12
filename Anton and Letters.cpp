#include<bits/stdc++.h>

using namespace std;

int main(){
    int lt[126], cnt=0;
    for(int i=0;i<126;i++){
        lt[i]=0;
    }
    while(1){
        char c;
        cin>>c;
        if(c=='}'){
            break;
        }
        else if(c!='{' && c!=',' && c!=' '){
            lt[(int)c]++;
        }

    }


    for(int i=0;i<126;i++){
        if(lt[i]>0){
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}
