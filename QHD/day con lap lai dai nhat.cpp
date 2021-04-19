#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        int arr[123]; memset(arr,0,sizeof(arr));
        int len; string s; int ans(0);
        cin>>len>>s;
        for(int i(0);i<len;i++) {arr[(int)s[i]]++; ans=max(ans,arr[(int)s[i]]);}
        cout<<ans-1<<'\n';
        
    }
}