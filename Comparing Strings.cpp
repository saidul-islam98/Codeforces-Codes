#include<bits/stdc++.h>

using namespace std;

int main(){

    bool flag=false;
    string fs="";
    string ss="";

    getline(cin, fs);
    getline(cin, ss);

    if(fs.length()==ss.length()){
        for(int i=0;i<fs.length();i++){
            for(int j=0;j<fs.length() && j!=i;j++){
                swap(fs[i],fs[j]);
                if(fs.compare(ss)==0){
                    flag=true;
                    break;
                }
                else{
                    swap(fs[j],fs[i]);
                }
            }
            if(flag==true){
                break;
            }
        }
    }
    else{
        flag=false;
    }


    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
