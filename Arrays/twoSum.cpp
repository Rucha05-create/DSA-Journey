#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements in array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                cout << "[" << i << "," << j << "]";
                return 0;
            }
        }
    }

    cout << "No Solution Possible";

    return 0;
}