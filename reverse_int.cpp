/* Reverse an integer
 * Bound cases:
 * 1. Negative number
 * 2. Very large number
 */
#include<iostream>
using namespace std;
int reverse(int x)
{
  long long newnum=0;
  while(abs(x)>0)
    {
      newnum = newnum*10 + (x%10);
      x = x/10;
    }
  return (newnum <INT_MIN || newnum > INT_MAX) ? 0 : newnum ;
}
int main()
{
  int num=-123;
  cout<<reverse(num)<<endl;
}
