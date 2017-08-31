/* Longest path of all strings in the array
 * Start with the first string: add each char into the result string
 * Second loop to go through all strings left in the vector. CHeck if 2 strings next to each other are the same in the vertical index or not
 */
#include<iostream>
#include<vector>
#include<string>
using namespace std;
string longPrefix(vector<string> &strs)
{
  string res="";
  /* Condition for this loop is tricky, it should not be the size of the vector. If vector has 2 elements, then the answer is wrong */
  for(int idx=0;  strs.size()>0; res+=strs[0][idx], idx++)
    {
      for(int i=0; i<strs.size(); i++)
	{
	  /* If the current string is smaller than the first string, no further loop 
	   * Or the vertical index of the 2 strings are not the same
	   */
	  if(idx >=strs[i].size() || (i>0 && (strs[i][idx] != strs[i-1][idx])))
	    return res;
	}
    }
  return res;
}
int main()
{
  vector<string> str;
  str.push_back("time");
  str.push_back("that");
  str.push_back("thought");

  string result;
  result = longPrefix(str);
  cout<<"Result string= "<<result<<endl;
}
