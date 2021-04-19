#include<bits/stdc++.h>
using namespace std;

bool solve(string s,int d){
    int n=s.length();
    int arr[27]; memset(arr,0,sizeof(arr));

    // tim kt xk nhieu nhat
    // chia thanh cac space rong d
    
    int M(0); // kt co so lan xh max
    for(int i(0);i<n;i++){
        int k=s[i]-'A';
        arr[k]++;
        if(M<arr[k]) M=arr[k];
    }

    int coup(0); // so cap kt giong nhau tinh ca cap xh MAx
    for(int i(0);i<='Z'-'A';i++) if(arr[i]>0) coup+=arr[i]-1;

    // (M-1)*(d-1) la so khoang trong toi thieu de dien kt
    if( ((M-1)*(d-1))>n-M or coup-(M-1) > (M)) return false;
    else return true;
}

main(){
    int t; cin>>t;
    while(t--){
        int d; cin>>d;
        string s;
        cin>>s;

        if(solve(s,d)) cout<<"1\n";
        else cout<<"-1\n";
    }
}
/*
5
3
SDDSFG
2
ERERR
2
RRRRKK
3
CCVV ? ?
VCFVCF
3
GGJGJKKLET
ggjgjkkll
//lgjkgjkg
*/