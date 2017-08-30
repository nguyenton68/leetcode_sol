/* 08/29/2017 
 * Sum of two numbers equal target, return 2 indices
 * - Use two for loops.
 * - Push 2 indices into vector if a[i]+a[j]==target
 */
#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int> & nums, int target)
{
  vector<int> res;
  for(int i=0; i<nums.size(); i++)
    {
      for(int j=i+1; j<nums.size(); j++)
	{
	  if(nums[i]+nums[j] ==target)
	    {
	      res.push_back(i);
	      res.push_back(j);
	    }
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
