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
};

void Gray::solve(){
    cin>>n;
    str.push_back("0");
    str.push_back("1");

    while(n>1){
        next(); n--;
    }

    for(int i(0);i<str.size();i++) cout<<str[i]<<' ';
    cout<<'\n';
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

main(){
    int t; cin>>t;
    while(t--){
        Gray t;
        t.solve();
    }
}