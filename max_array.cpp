#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    cout<<endl;
    int ele=a[0];
    int count=1;
    for (int i = 1; i < n; i++)
    {
        if(a[i]!=ele){
            count++;
            ele=a[i];
        }
        
    }
    int arr[count][2]={0};
    ele=a[0];
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==ele){
            arr[j][0]=ele;
            arr[j][1]++;
        }
        else{
            ele=a[i];
            j++;
            arr[j][0]=ele;
            arr[j][1]++;
        }
    }

    // for (int i = 0; i < count; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-1-i; j++)
        {
                if(arr[j][1]<arr[j+1][1]){
                    int temp=arr[j][0];
                    arr[j][0]=arr[j+1][0];
                    arr[j+1][0]=temp;

                    temp=arr[j][1];
                    arr[j][1]=arr[j+1][1];
                    arr[j+1][1]=temp;
                }
        }
        
    }
    cout<<endl;
    
    // for (int i = 0; i < count; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;    

    int k=0;
    for (int i = 0; i < count; i++)
    {
        for(int j=0;j<arr[i][1];j++){
            a[k++]=arr[i][0];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    //cout<<count<<endl;
    return 0;
}