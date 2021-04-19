#include <bits/stdc++.h>
using namespace std;

int n; int used[11];
int arr[11];
void Try(int k){
    for(int i(n);i>0;i--) if(used[i]==0) {
        arr[k]=i; used[i]=1;
        if(k==n) {for(int j(1);j<=n;j++) cout<<arr[j]; cout<<' ';}
            else {
                Try(k+1);
            }
        used[i]=0;
    }

}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        for(int i(0);i<11;i++) used[i]=0;
        Try(1);
        cout<<'\n';
    }
}