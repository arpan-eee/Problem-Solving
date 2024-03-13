#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int big = arr[1];
    int index = 1;
    bool flag = true;
    bool all_value_zero ;
    while(!flag && !all_value_zero){
        all_value_zero = true;

        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                all_value_zero = false;
                break;
            }
            // else if(i==n-1)
            // {
            //     all_value_zero = true;
            // }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>big)
            {
                big = arr[i];
                index = i;
            }
            if(arr[i]<0)
            {
                flag = false;
                break;
            }
        }
        if ( index > 0 && index < n-1)
        {
            arr[index] = arr[index]-2;
            arr[index-1] = arr[index-1]-1;
            arr[index+1] = arr[index+1]-1;
            big = arr[0];

            if(arr[index]<0 || arr[index-1]<0||arr[index+1]<0)
        {
            break;
        }
        }
        

    }
    if(flag && all_value_zero) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}