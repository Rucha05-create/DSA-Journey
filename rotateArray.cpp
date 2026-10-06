#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,k;
    
    cout<<"Enter number of elements in array :";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"Enter number of rotations :";
    cin>>k;

    k=k%n;

    reverse(nums.begin(),nums.end());

    reverse(nums.begin(),nums.begin()+k);

    reverse(nums.begin()+k,nums.end());

    cout<<"Rotated Array : [";

    for(int i=0;i<n;i++)
    {
        cout<<nums[i];
        if(i!=n-1)
        {
            cout<<",";
        }
    }

    cout<<"]";
}
