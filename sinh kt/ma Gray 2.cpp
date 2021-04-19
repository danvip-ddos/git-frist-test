#include <bits/stdc++.h>
using namespace std;

class Gray 
{
    private:
        int n;
        vector<string> str;
    public:
        void solve();
        void next();
        void convertBin(string);
};

void Gray::solve(){

    string x; cin>>x;
    n=x.length(); int t=n;
    str.push_back("0");
    str.push_back("1");
    while(t>1){
        next();
        t--;
    } 
    convertBin(x);
}

void Gray::next(){
    vector<string> clone;
    for(int i(str.size()-1);i>=0;i--) {
        clone.push_back(str[i]);
        str[i]='0'+str[i];
    }
    for(int i(0);i<clone.size();i++){
        str.push_back('1'+clone[i]);
    }
}

void Gray::convertBin(string x){
    int bin(0);
    for(int i(0);i<str.size();i++) 
        if(x==str[i]) { bin = i; break;}
    
    int a[n];
    for(int i(0);i<n;i++)
        if(bin>=pow(2,n-1-i)) 
            {   a[i]=1;
                bin-=pow(2,n-1-i);
            }
        else a[i]=0;

    for(int i(0);i<n;i++) cout<<a[i];
    cout<<'\n';
}
main(){
    int t; cin>>t;
    while(t--){
        Gray t;
        t.solve();
    }
}