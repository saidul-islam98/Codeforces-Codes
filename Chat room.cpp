#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    string ss="hello";
    char c[5];
    int x=0,flag=1;

    int cnth=1,cnte=1,cntl=2,cnto=1;
    bool flagh=false, flage=false, flagl=false;

    for(int i=0;i<s.length();i++){
        if(s[i]=='h'){
            if(cnth==0){
                s[i]='#';
            }
            else{
                cnth--;
                flagh=true;
            }
        }
        else if(s[i]=='e' && flagh==true){
            if(cnte==0){
                s[i]='#';
            }
            else{
                cnte--;
                flage=true;
            }
        }
        else if(s[i]=='l' && flagh==true && flage==true){
            if(cntl==0){
                s[i]='#';
            }
            else{
                cntl--;
                flagl=true;
            }
        }
        else if(s[i]=='o' && flagh==true && flage==true && flagl==true && cntl==0){
            if(cnto==0){
                s[i]='#';
            }
            else{
                cnto--;
            }
        }
        else{
            s[i]='#';
        }
    }

    for(int i=0;i<s.length();i++){
        if(s[i]!='#' && x<5){
            c[x]=s[i];
            x++;
        }
    }

    string str(c);

    for(int i=0;i<5;i++){
        if(str[i]==ss[i]){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}


//#include <iostream>
//using namespace std;
//string a, b = "hello";
//int j = 0, pas = 0;
//int main() {
//    cin >> a;
//    for (int i = 0; i < a.size(); i++) {
//        if (a[i] == b[j]) {
//            j++;
//            pas++;
//
//            if (pas == 5) {
//                break;
//            }
//        }
//    }
//    if (pas == 5) {
//        cout << "YES";
//    } else {
//        cout << "NO";
//    }
//}
