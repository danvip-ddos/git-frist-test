#include<bits/stdc++.h>
using namespace std;

bool solve(string s){
    int n=s.length();
    int arr[27]; memset(arr,0,sizeof(arr));

    // tim kt xk nhieu nhat
    // chia thanh cac space
    // dat cac kt con lai vao space
    int M(0);
    for(int i(0);i<n;i++){
        int k=s[i]-'a';
        arr[k]++;
        if(M<arr[k]) M=arr[k];
    }
    
    // M-1 la so khoang trong toi thieu de dien kt
    if((M-1)>n-M) return false;
    else return true;
}

main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;

        if(solve(s)) cout<<"1\n";
        else cout<<"-1\n";
    }
}
/*
5
dadddf
bachgjj
vvvbvhh
lklklklklkk
lklklklklkkk
*/