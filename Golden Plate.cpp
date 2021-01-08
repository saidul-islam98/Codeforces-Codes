#include<bits/stdc++.h>

using namespace std;

int main(){
    int w,h,k,cnt=0;
    cin>>w>>h>>k;

    if(w-2==0 || h-2==0){
        cout<<w*h;
    }
    else{
        while(k>0){
            if(w>0 && h>0){
                k--;
                if(w>h){
                    cnt+=((2*w)+(2*h-4));
                    w-=4;
                    h-=4;
                }
                else{
                    cnt+=((2*h)+(2*w-4));
                    w-=4;
                    h-=4;
                }
            }
            else{
                break;
            }
        }
    }

    cout<<cnt;
    return 0;
}
