#include<iostream>
//#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<stack>
#include<cmath>
#include<queue>
#include<set>
#include<map>
#include <iomanip>
#include<algorithm>
#define int  long long
#define fuck  ios::sync_with_stdio(false);
#define rep(i,a,b)  for(int  i=a;i<b;i++)
#define M 100000000
int gcd(int a , int  b){ if(!b){  return a;}  return gcd(b,a%b); }
using namespace std;
int32_t main()
{
  string s1;
  string s2;
  cin>>s1;
  cin>>s2;

  string str1,str2,str3,str4;
  char a,b;
  //cin>>str1>>str2>>str3>>str4;
  for(int i=0;i<=1;i++)
  {
    str1[i]=s1[i];
  }
  for(int i=3;i<5;i++)
  {
    str2[i-3]=s1[i];
  }
  for(int i=0;i<=1;i++)
  {
    str3[i]=s2[i];
  }
  for(int i=3;i<5;i++)
  {
    str4[i-3]=s2[i];
  }
int x=stoi(str1);
int y=stoi(str2);
int z=stoi(str3);
int w=stoi(str4);
int lexi=(x*60)+y;
int semi=(z*60)+w;
int midi=(semi+lexi)/2;
//cout<<midi<<endl;
int blah=midi/60;
//cout<<blah<<endl;
if(blah<10)
{
  cout<<"0"<<blah<<":";
}
else
{
  cout<<blah<<":";
}
int blah1=midi%60;
if(blah1<10)
{
  cout<<"0"<<blah1<<endl;
}
else
{
  cout<<blah1<<endl;
}
return 0;
}
