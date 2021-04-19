#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
        string x; cin>>x;
        int len=x.length();
        int dyn[len+1];
        dyn[0]=dyn[1]=1;
        for(int i(2);i<=len;i++) {
            dyn[i]=0;
            if(x[i-1]>='1'&&x[i-1]<='9') dyn[i]+=dyn[i-1];
            int temp = (x[i-2]-'0')*10+(x[i-1]-'0');
            if(temp<=26) dyn[i]+=dyn[i-2];
        }
        cout<<dyn[len]<<'\n';
    }  
}