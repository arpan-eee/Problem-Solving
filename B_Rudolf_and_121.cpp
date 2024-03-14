#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bool f = false;
    bool all_value_zero = false;
    int max = arr[0];
    int max_index = arr[0];
    for(int i = 0; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    if (max_index==0 || max_index == n-1)
    {
        f=true;
        break;

    }
    else{
      arr[max_index] = arr[max_index]-2;
      arr[max_index+1] = arr[max_index]-1;
      arr[max_index-1] = arr[max_index]-1;

      if(arr[max_index]<0 || arr[max_index+1]<0 ||arr[max_index-1]<0)
      {
        f = true;
        break;
      }
      all_value_zero = true;
      for(int i=0;i<n;i++)
      {
        if(arr[i]!=0)
        {
          all_value_zero = false;
        }
      }
    }
    
  }
  return 0;
}