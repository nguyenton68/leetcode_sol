/* Check if given string is a valid parenthese
 * - Use map to connect the opened and closed of same type
 * - Push into stack the open paren, then compare with the close in map with s[i]
 * - If match, then pop out the current top of stack
 */
#include<iostream>
#include<stack>
#include<map>
#include<string>

using namespace std;
bool isValid(string s)
{
  /* Map open and close of same type */
  map<char,char> m;
  m['{']='}';
  m['(']=')';
  m['[']=']';
  /* Use stack to store the lastest added paren and compare this with s[i]*/
  stack<char> tmp;
  for(int i=0; i<s.length(); i++)
    {
      if(s[i]=='('||s[i]=='{'||s[i]=='[')
	tmp.push(s[i]);
      else if(tmp.empty() || m[tmp.top()]!=s[i])
	return false;
      else
	tmp.pop();
    }
  return tmp.empty();
}
int main()
{
  string in="{}";
  cout<<isValid(in)<<endl;
}
