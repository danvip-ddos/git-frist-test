#include <bits/stdc++.h>
using namespace std;


main(){
    int t; cin>>t;
    while(t--){
        int n,s; cin>>n>>s;

        int arr[n]; for(int i(0);i<n;i++) cin>>arr[i]; 
        int L[s+1]; memset(L,0,sizeof(L)); L[0]=1;
        for(int i(0);i<n;i++)
            for(int t(s);t>=arr[i];t--){
                if(L[t]==0&&L[t-arr[i]]==1) L[t]=1;
            }
        if(L[s]) cout<<"YES";
        else cout<<"NO";
        cout<<'\n';        
    }
}
