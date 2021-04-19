#include <bits/stdc++.h>

using namespace std;

main(){
     int t; cin>>t;
     while(t--){
         long long tu,mau;
         cin>>tu>>mau;

         while(tu!=0){ 
            if(mau%tu==0) {
                cout<<"1/"<<mau/tu;
                break;                
            }
            else {
                long long x= mau/tu+1;
                tu=tu*x-mau;
                mau=mau*x;
                cout<<"1/" <<x<<" + ";
            }
        }
         cout<<'\n';
     }
}
