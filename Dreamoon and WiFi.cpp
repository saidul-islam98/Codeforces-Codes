#include<bits/stdc++.h>

using namespace std;

int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}

int main(){
    string s,ss;
    cin>>s>>ss;

    int ps1=0,ms1=0,ps2=0,ms2=0,cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='+') ps1++;
        else ms1++;
    }

    for(int i=0;i<ss.length();i++){
        if(ss[i]=='+') ps2++;
        else if(ss[i]=='-') ms2++;
        else cnt++;
    }

    float prob=1;

    if(ps1==ps2 && ms1==ms2) printf("%0.12f",prob);
    else if((ps1==s.length() && ms2>0) || (ms1==s.length() && ps2>0)){
        prob=0;
        printf("%0.12f",prob);
    }
    else if((ps2>ps1) || (ms2>ms1)){
        prob=0;
        printf("%0.12f",prob);
    }
    else{
        int p=ps1-ps2,m=ms1-ms2,h,l;
        if(p<=m){
            h=m;
            l=p;
        }
        else{
            h=p;
            l=m;
        }
        int total=pow(2,cnt);
        int comb1=fact(cnt) / (fact(h) * fact(cnt-h));
        int comb2=fact(cnt-h) / (fact(l) * fact(cnt-h-l));
        prob=float(comb1*comb2)/float(total);
        printf("%0.12f",prob);
    }

    return 0;
}
