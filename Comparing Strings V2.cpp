#include<bits/stdc++.h>

using namespace std;

int main(){
    bool flag=false;
    int fss[26], sss[26];
    for(int i=0;i<26;i++){
        fss[i]=0;
        sss[i]=0;
    }

    string fs="";
    string ss="";

    getline(cin, fs);
    getline(cin, ss);


    if(fs.length()!=ss.length()){
        flag=false;
    }
    else{
        for(int i=0;i<fs.length();i++){
            int x;
            x=(int)fs[i]-97;
            fss[x]++;
        }
        for(int i=0;i<ss.length();i++){
            int x;
            x=(int)ss[i]-97;
            sss[x]++;
        }

        for(int i=0;i<26;i++){
            if(fss[i]>0){
                if(fss[i]!=sss[i]){
                    flag=false;
                    break;
                }
                else{
                    flag=true;
                }
            }
        }

        if(flag==true){
            flag=false;
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
    }

    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
