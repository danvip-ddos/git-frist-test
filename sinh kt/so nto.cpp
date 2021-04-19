#include <bits/stdc++.h>
using namespace std;

vector<int> vec;
int check[201];
void in(){
    for(int i(0);i<vec.size();i++) cout<<vec[i]<<' ';
    cout<<'\n';
}
void Try(int s,int k,int p){

    if(k>1) for(int i(p+1); i<=s/k;i++)  if(check[i]) {vec.push_back(i); Try(s-i,k-1,i); vec.pop_back();}
    
    if(k==1) if(check[s]) {vec.push_back(s); in();  vec.pop_back();}
	           

}
main(){
check[0]=check[1]=0; check[2]=check[3]=1;
for(int i(4);i<201;i++) check[i]=1;

for(int i(2);i<201;i++){
    if(check[i]) {
        int temp(i); 
        while(i*temp<201) {
            check[i*temp]=0;
            temp++;
        }
    }
}

int t; cin>>t;
while(t--){
    int n,p,s;cin>>n>>p>>s;
    Try(s,n,p);
    }
}