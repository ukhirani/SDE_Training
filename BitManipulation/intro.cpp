#include <bits/stdc++.h>
using namespace std;
int main(){
int a = 5;
int b = 6;

cout<<a<<"\t"<<b<<endl;

//swapping logic

a = a^b;
b = a^b;
a = a^b;

cout<<a<<"\t"<<b<<endl;

}
