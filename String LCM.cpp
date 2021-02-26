#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
  if(b==0)
    return a;
  return gcd(b,a%b);
}

int lcm(int a,int b){
    return (a/gcd(a,b))*b;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        string s,st;
        cin>>s>>st;

        n=s.length();
        m=st.length();

        if(n>m){
            bool flag=true;
            if(n%m==0){
                int o=0;
                while(o<n){
                    for(int i=0;i<m;i++){
                        if(s[o]!=st[i]){
                            flag=false;
                            break;
                        }
                        else{
                            o++;
                        }
                    }
                    if(flag==false){
                        break;
                    }
                }
                if(flag==true){
                    cout<<s<<'\n';
                }
                else{
                    cout<<-1<<'\n';
                }
            }
            else{
                int p;
                string fs="";
                int lcms=lcm(n,m);
                p=lcms/n;
                while(p--){
                    fs.append(s);
                }
                n=fs.length();
                int o=0;
                while(o<n){
                    for(int i=0;i<m;i++){
                        if(fs[o]!=st[i]){
                            flag=false;
                            break;
                        }
                        else{
                            o++;
                        }
                    }
                    if(flag==false){
                        break;
                    }
                }
                if(flag==true){
                    cout<<fs<<'\n';
                }
                else{
                    cout<<-1<<'\n';
                }
            }
        }
        else if(m>n){
            bool flag=true;
            if(m%n==0){
                int o=0;
                while(o<m){
                    for(int i=0;i<n;i++){
                        if(st[o]!=s[i]){
                            flag=false;
                            break;
                        }
                        else{
                            o++;
                        }
                    }
                    if(flag==false){
                        break;
                    }
                }
                if(flag==true){
                    cout<<st<<'\n';
                }
                else{
                    cout<<-1<<'\n';
                }
            }
            else{
                int p;
                string fst="";
                int lcms=lcm(n,m);
                p=lcms/m;
                while(p--){
                    fst.append(st);
                }
                m=fst.length();
                int o=0;
                while(o<m){
                    for(int i=0;i<n;i++){
                        if(fst[o]!=s[i]){
                            flag=false;
                            break;
                        }
                        else{
                            o++;
                        }
                    }
                    if(flag==false){
                        break;
                    }
                }
                if(flag==true){
                    cout<<fst<<'\n';
                }
                else{
                    cout<<-1<<'\n';
                }
            }
        }
        else{
            bool flag=true;
            for(int i=0;i<n;i++){
                if(s[i]!=st[i]){
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                cout<<-1<<'\n';
            }
            else{
                cout<<s<<'\n';
            }
        }
    }
    return 0;
}
