#include <bits/stdc++.h>
using namespace std;

int X;
bool cmp(int a, int b){
    return abs(X-a)<abs(X-b);
}
main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int num0(0),num1(0),num2(0);
    for(int i(0);i<n;i++){
        int x; cin>>x;
        if(x==1) num1++;
        else if(x==0) num0++;
        else if(x==2) num2++;
    }
    for(int i(0);i<num0;i++) cout<<"0 ";
    for(int i(0);i<num1;i++) cout<<"1 ";
    for(int i(0);i<num2;i++) cout<<"2 ";
    cout<<'\n';
    }
}