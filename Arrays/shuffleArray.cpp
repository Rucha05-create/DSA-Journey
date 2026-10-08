#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;

    cout<<"Enter n : ";
    cin>>n;

    int size=2*n;

    vector<int> nums(size);

    cout<<"Enter "<<size<<" elements : ";
    for(int i=0;i<size;i++)
    {
        cin>>nums[i];
    }

    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        ans.push_back(nums[i]);
        ans.push_back(nums[i+n]);
    }

    cout<<"Updated Array [";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
        if(i!=ans.size())
        {
            cout<<",";
        }
    }
    cout<<"]"<<endl;

}