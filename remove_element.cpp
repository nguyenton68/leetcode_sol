#include<iostream>
#include<vector>
using namespace std;
int removeEle(vector<int>& nums, int val)
{
  int i=0;
  for(int l=0; l<nums.size(); l++)
    {
      /* If not equal, then keep in array with different index */
      if(nums[l]!=val)
	nums[i++]=nums[l];
    }
  return i;
}
int main()
{
  vector<int> v;
  v.push_back(3);
  v.push_back(2);
  v.push_back(2);
  v.push_back(3);
  v.push_back(2);
  v.push_back(6);
  v.push_back(9);

  int newlength =removeEle(v,3);
  cout<<"New length= "<<newlength<<endl;
}
