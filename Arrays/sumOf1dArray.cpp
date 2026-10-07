#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
        nums[i]=sum;
    }

    cout<<"Running Sum Array : [";

    for(int i=0;i<n;i++)
    {
        cout<<nums[i];

        if(i!=n-1)
        {
            cout<<",";
        }
    }

    cout<<"]";

    return 0;
}