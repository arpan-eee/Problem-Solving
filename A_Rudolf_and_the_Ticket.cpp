#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a,b,c;
        cin>> a>>b>>c;
        
        int arr1[a];
        int arr2[b];
        int count =0;

    for(int i=0;i<a;i++){
    cin>>arr1[i];
}
    for(int i=0;i<b;i++){
    cin>>arr2[i];
}

        for(int j=0;j<a;j++){
            for(int k=0;k<b;k++){
                if(arr1[j]+arr2[k]<=c){
                    count++;
                }

            }
        }
        cout<<count<<endl;
    }
    return 0;
    }

