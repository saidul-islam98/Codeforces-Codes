#include<bits/stdc++.h>

using namespace std;

///ITERATIVE SOLUTION

int main(){
    string s;
    cin>>s;

    int cnt=0;

    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            for(int k=j+1;k<s.length();k++){
                if(s[i]=='Q'){
                    if(s[j]!='A') break;
                    else{
                        if(s[k]=='Q') cnt++;
                    }
                }
            }
        }
    }

    cout<<cnt;
    return 0;
}


///DP SOLUTION:
//
//
//
//int main() {
//	string s; cin >> s;
//	int q1 = 0, q2 = 0;
//	for(int i = 0; i < s.length(); i++)
//		if(s[i] == 'Q')
//			q1++;
//
//    cout<<q1<<'\n';
//	int res = 0;
//	for(int i = 0; i < s.length(); i++){
//		if(s[i] == 'Q'){
//            q2++, q1--;
//			cout<<i<<" q1 & q2: "<<q1<<" "<<q2<<'\n';
//		}
//		if(s[i] == 'A'){
//            res += q1 * q2;
//			cout<<i<<"res: "<<res<<'\n';
//		}
//	}
//
//	cout << res << endl;
//	return 0;
//}
