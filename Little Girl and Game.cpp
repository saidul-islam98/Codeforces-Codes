#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]!='#'){
            str+=s[i];
        }
    }
    int l=0;
    int h=str.length()-1;

    while(h>l){
        if (str[l++]!=str[h--]){
            return false;
        }
    }
    return true;
}

int main(){
    int cnt=1;
    bool flag=false,palin=false;
    string s;
    cin>>s;

    if(isPalindrome(s)){
        cout<<"First";
        return 0;
    }
    else{
        for(int i=0;i<s.length();i++){
            for(int j=0;j<s.length();j++){
                string tmp;
                int cntmp;
                tmp=s;
                cntmp=cnt;
                int k=j;
                while(cntmp--){
                    if(k<s.length()){
                        tmp[k]='#';
                        k++;
                    }
                    else{
                        break;
                    }
                }
                if(isPalindrome(tmp)){
                    palin=true;
                    break;
                }
            }
            cnt++;
            if(palin==true){
                break;
            }
        }
    }


    if(cnt%2!=0){
        cout<<"First";
    }
    else{
        cout<<"Second";
    }
    return 0;
}

