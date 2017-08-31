#include<iostream>
#include<string>
#include<map>
using namespace std;

int romanToInt(string s)
{
  int res =0;
  map<char, int> m;
  m['I']=1;
  m['V']=5;
  m['X']=10;
  m['L']=50;
  m['C']=100;
  m['D']=500;
  m['M']=1000;
  int cur, next;
  //  cout<<endl;
  for(int i=0; i<s.length()-1; i++)
    {
      cur = m[s[i]];
      next = m[s[i+1]];
      //      cout<<s[i]<<"\t"<<cur<<"\t"<<next<<endl;
      if(cur>=next)
	res+=cur;
      else
	res-=cur;
    }
  return res +m[s[s.length()-1]];
}
int main()
{
  string in="XXI";
  cout<<"convert "<<in<<"\t into number= "<<romanToInt(in)<<endl;
}
