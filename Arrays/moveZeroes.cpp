#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements in array : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    int i=0;

    for(int j=0;j<n;j++)
    {
        if(nums[j]!=0)
        {
            swap(nums[i],nums[j]);
            i++;
        }
    }

    cout<<"Sorted Array : [";

    for(int i=0;i<n;i++)
    {
        cout<<nums[i];
        if(i!=n-1)
        {
            cout<<",";
        }
    }

    cout<<"]"<<endl;

    return 0;

}