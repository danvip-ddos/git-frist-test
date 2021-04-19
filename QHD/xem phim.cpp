#include <bits/stdc++.h>
using namespace std;

main(){
        int c,n; cin>>c>>n; int arr[n];
        int L[c+1]; memset(L,0,sizeof(L)); L[1]=1;
        for(int i(0);i<n;i++) cin>>arr[i];

        int ans(arr[0]);
        L[arr[0]]=1;
        for(int i(1);i<n;i++){
            for(int j(c);j>=arr[i];j--) if(L[j]==0&&L[j-arr[i]]==1) {L[j]=1; ans=max(ans,j);}
        }
        cout<<ans<<'\n';
    
}