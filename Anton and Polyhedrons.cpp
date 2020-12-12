#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,cnt=0;
    cin>>n;

    while(n--){
        string s;
        cin>>s;
        if(s=="Cube"){
            cnt=cnt+6;
        }
        else if(s=="Tetrahedron"){
            cnt=cnt+4;
        }
        else if(s=="Octahedron"){
            cnt=cnt+8;
        }
        else if(s=="Dodecahedron"){
            cnt=cnt+12;
        }
        else if(s=="Icosahedron"){
            cnt=cnt+20;
        }
    }

    cout<<cnt;
    return 0;
}
