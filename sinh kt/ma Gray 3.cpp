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
        void convertGray(string);
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
    convertGray(x);
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

void Gray::convertGray(string x){
    int num(0);
    for(int i(0);i<x.length();i++) 
        num+= (x[i]-'0')*pow(2,n-1-i);
    
    cout<<str[num];
    cout<<'\n';
}
main(){
    int t; cin>>t;
    while(t--){
        Gray t;
        t.solve();
    }
}