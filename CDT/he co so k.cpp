#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

string sum(int k,string x, string y){
    int len1(x.length()),len2(y.length());
    if(len1<len2) { int temp=abs(len1-len2); while(temp--) x='0'+x;}
    else { int temp=abs(len1-len2); while(temp--) y='0'+y;}

    int bu(0),n(x.length()); string ans="";
    for(int i(n-1);i>=0;i--){
        int t = x[i] + y[i]-2*'0'+bu;
        bu=t/k;
        char c = (char)(t%k+'0');
        ans=c+ans;
    }
    if(bu>0) ans=(char)(bu+'0') +ans;
    return ans;
}
main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string x,y; cin>>x>>y;
        cout<<sum(n,x,y)<<'\n';
    }

}
