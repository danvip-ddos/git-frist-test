#include<bits/stdc++.h>
using namespace std;

vector<int> Vec;
int n;
void in(){
    cout<<'('<<Vec[0];
    for(int i(1);i<Vec.size();i++) cout<<' '<<Vec[i];
    cout<<") ";
}
void Try(int n,int k){
    for(int i(k);i>0;i--){
        Vec.push_back(i);

        if(n-i>0) { Try(n-i,i); }
        else if(n-i==0) in();
        Vec.pop_back();
    }
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        Try(n,n);
        cout<<'\n';
    }
}