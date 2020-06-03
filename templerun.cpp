#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,m,s,i,j,s1=0,c=0;
  cin>>n;
  long long int a[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  cin>>m;
  for(i=0;i<m;i++)
  {
    cin>>s;
    s1=0;
    c=0;
    for(j=0;j<n;j++)
    {
      s1+=a[j];
      if(s1>=s)
      {
        c=j+1;
        break;
      }
    }
    if(c==0)
      cout<<"-1\n";
    else
      cout<<c<<"\n";
  }
}
