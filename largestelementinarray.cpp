// bits/stdc++.h
#include <iostream>
#include <vector>
#include <algorithm>
// Add other headers as needed


using namespace std;
int largest(int arr[],int n)
{
    int max = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {1,45,56,67,78,89,100,23,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"ARRAY BEFORE SORTING ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"ARRAY AFTER SORITNG ";
    sort(arr,arr+n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"maximum element in array:" << largest(arr,n);
    return 0;
}