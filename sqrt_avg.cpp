#include<bits/stdc++.h>
using namespace std;
float sqrt(float x,float g){
    if(abs((x - g*g)/x)<0.0000000001){
        return g;

    }else{
        return sqrt(x,(g+(x/g))/2);
    }
}

int hanoi(int h){
    if(h==0){
        return h;
    }else{
        return 2*(hanoi(h-1))+1;
    }
}
int main(){
    // float g = 10;
    // float x;
    // cin>>x;
    // float root = sqrt(x,g);
    // cout<<"Here is the sqrt"<<endl;
    // cout<<root;

    int h;
    cin>>h;
    cout<<hanoi(h)<<endl;

}
