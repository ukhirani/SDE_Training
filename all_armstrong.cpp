#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
  // code here
  int len = (int)floor(log10(n)) + 1;

  // now what we need to do is that extract each digit and cube it and add it to the resultant sum
  int sum = 0;
  int digit = 0;
  for (int i = 0; i < len; i++)
  {
    int hello = (int)pow(10, i + 1);
    digit = n % hello / (hello / 10);

    sum += (int)pow(digit, len);
    // cout<<sum;
  }

  // then check if the resultant sum == n

  return sum == n;
}
int main()
{
  cout<<"printing all numbers between 1 to 1000"<<endl;
  for (int i = 0; i <= 1000; i++)
  {
    if (isArmstrong(i))
    {
      cout << i << endl;
    }
  }
}
