#include<bits/stdc++.h>

using namespace std;

int main(){
    int flag=1;
    string s1, s2, s3;
    cin>>s1>>s2>>s3;

    int st1=s1.length(), st2=s2.length(), st3=s3.length();

    for(int i=0;i<s1.length();i++){
        for(int j=0;j<s3.length();j++){
            if(s1[i]==s3[j]){
                s3[j]='#';
                break;
            }
        }
    }


    for(int i=0;i<s2.length();i++){
        for(int j=0;j<s3.length();j++){
            if(s2[i]==s3[j]){
                s3[j]='#';
                break;
            }
        }
    }

    for(int i=0;i<s3.length();i++){
        if(s3[i]=='#'){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }

    if(flag==1 && ((st1+st2)==st3)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
