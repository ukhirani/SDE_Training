
#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
       return n>0 && !((n)&(n-1));
   }

int main(){
int a = 5;
int b = 6;

cout<<a<<"\t"<<b<<endl;

//swapping logic

a = a^b;
b = a^b;
a = a^b;

cout<<a<<"\t"<<b<<endl;

// check if the i'th bit is set or not
//
// let's say for example we have 13 and we want to check that the 2nd bit is set or not
// 13 == 1101
// now we do left shift 2 to 1 so now it becomes 100
//
// and now we simply do AND logic
// so now we are precisely checking the i'th bit of the number is set or not

int x = 13;
// lets say we want to check the i'th digit is set or not
//

int check_digit = 2;
int bit_set_or_not = x && (1<<check_digit);
cout<<check_digit<<"th/nd bit is set or not : "<<bit_set_or_not<<endl;

// we can also do the number given and right shift it by 1 so now the i'th bit is at the unit's place and now we simply do 1 & num

// now we are setting the bit to 1;
// that can simply be done by OR'ing the whole thing by 1 bit right below the i'th digit
//
// more like
// 1 0 0 1
// 0 1 0 1 (OR)
// - - - -
// 1 1 0 1
//

int num = 9; // 1 0 0 1
int i = 2; // the 0 indexed bit we want to set to 1
cout<<"Please enter num and i :";
cin>>num>>i;
cout<<endl;
int set_answer = num | (1<<i);

cout<<i<<"th/nd bit set of "<<num<<" = "<<set_answer<<endl;

// clearing the i'th bit
set_answer = num & ~(1<<i);
cout<<i<<"th/nd bit clear of "<<num<<" = "<<set_answer<<endl;

//toggling the i'th bit
set_answer = num ^ (1<<i);
cout<<i<<"th/nd bit toggled of "<<num<<" = "<<set_answer<<endl;


//toggling the rightmost 0
//     |      -> this is the bit we are concerned about
// 1 1 1 0 0
// 1 1 0 0 0  -> this is the answer we are expecting
//
// we simply see that the N-1 number toggles the rightmost 1 as 0
//
// thus we simply return N AND N-1

set_answer = num & num-1;
cout<<"the right most 1 toggled of "<<num<<" = "<<set_answer<<endl;

set_answer = isPowerOfTwo(num);
cout<<"is "<<num<<" a power of 2  = "<<set_answer<<endl;



}
