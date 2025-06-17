#include<bits/stdc++.h>
using namespace std;

int main ()
{
  // int[] hello = {1,2,3,4,5,5,6,67,8};
  // findMaxElement(hello);
  // std::cout << hello;
}

int findMaxElement(int[] x){
  int hello = x[0];
  for (int i = 0; i<sizeof(x); i++) {
   if (x[i] > hello) {

     hello = x[i];



   }
   return hello;


  }
}
