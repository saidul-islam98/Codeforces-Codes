#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n;

    t=n;

    long long int w,h,prevh;
    cin>>w>>h;

    if(w>h)
        swap(w,h);
    prevh=h;
    t--;
    bool isDesc=true;
    while(t--){
        cin>>w>>h;
        if(isDesc){
            if(h<=prevh){
                if(w>h && w<=prevh){
                    swap(w,h);
                }
                prevh=h;
            }
            else if(h>prevh){
                if(w<h && w<=prevh){
                    swap(w,h);
                    prevh=h;
                }
                else{
                    isDesc=false;
                }
            }
        }
    }

    if(isDesc)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
