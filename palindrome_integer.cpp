#include<iostream>
bool isPalindrome(int x)
{
  /* negative number is not palindrome, number is a multiple of 10 is not palindrome either */
  if((x>0 && (x%10==0)) || x<0) return false;
  /* 1 digit number is a palindrome */
  if(x/10==0) return true;
  int newnum=0;
  while(x>newnum)
    {
      newnum = newnum*10 + (x%10);
      x = x/10;
    }
  return (x==newnum || (x/10)==newnum);
}
using namespace std;
int main()
{
  int a = 1222;
  cout<<isPalindrome(a)<<endl;
}
