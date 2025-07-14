#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;//8
n++;//9
int length = (int)floor(log2(n));
int reward,cycle,answer = 0;
int mod,diff;
int count = 0;
for(int index = 0;index<=length;index++){
    count++;
    reward = (1<<index);
    cycle = (1<<(index+1));
    answer+= ((int)(n/cycle))*reward;//4*1 = 4
    mod = n%cycle;//9%2=1
    diff = mod-(cycle/2);
    if(diff<0){
        diff = 0;
    }
    answer+=diff;

}
cout<<"answer : "<<answer<<endl;
cout<<"iterations : "<<count<<endl;

}
