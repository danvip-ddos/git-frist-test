#include <bits/stdc++.h>
using namespace std;

long long mod =1e9+7;
main(){
    int dyn_ugly[1001];
    dyn_ugly[0]=1; 
    int i2(0),i3(0),i5(0);
    for(int i(1);i<=1000;i++){    
        dyn_ugly[i]=min(dyn_ugly[i2]*2,min(dyn_ugly[i3]*3,dyn_ugly[i5]*5));

        if(dyn_ugly[i]==dyn_ugly[i2]*2) i2++;
        if(dyn_ugly[i]==dyn_ugly[i3]*3) i3++;
        if(dyn_ugly[i]==dyn_ugly[i5]*5) i5++;
    }

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<dyn_ugly[n-1]<<'\n';
    }
}
