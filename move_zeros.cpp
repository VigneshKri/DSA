#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100],c[100];
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int i=0;
  for(int j=0;j<n;j++)
    {
      if(a[j]!=0)
      {
        swap(a[i],a[j]);
        i++;
      }
    }
  for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    return 0;
}
