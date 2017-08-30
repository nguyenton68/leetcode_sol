/* 08/29/2017
 * Sum of two numbers equal target, return 2 indices
 * - Loop through the vector, if find a[i]+a[j]==target in the map, then push back result 
 * - Else, push value into the map
 */
#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> twoSum(vector<int> & nums, int target)
{
  vector<int> res;
  map<int, int> m;
  m.clear();

  for(int i=0; i<nums.size(); i++)
    {
      if(m.find(target-nums[i]) != m.end())
	{
	  res.push_back(m[target-nums[i]]);
	  res.push_back(i);
	}
      else
	{
	  m[nums[i]]=i;
	}
    }
  return res;
}
int main()
{
  vector<int> in;
  in.push_back(2);
  in.push_back(7);
  in.push_back(11);
  in.push_back(15);
  vector<int> result;
  result = twoSum(in, 9);
  for(int i=0; i<result.size(); i++)
    {
      cout<<result[i]<<"\t";
    }
  cout<<endl;
}
