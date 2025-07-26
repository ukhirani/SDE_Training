#include <bits/stdc++.h>
using namespace std;
int nCr(int n,int r){
    r = min(r,n-r);
    if(r<0){
        return 0;
    }
    if(r==0 || n==0){
        return 1;
    }
    return nCr(n-1,r) + nCr(n-1,r-1);
}
int main(){
    int n,r;
    cin>>n>>r;
cout<<n<<" C "<<r<<" = "<<nCr(n,r)<<endl;
}
