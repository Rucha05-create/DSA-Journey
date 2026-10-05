#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;

    cout << "Enter the target: ";
    cin >> target;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                cout << "[" << i << "," << j << "]" << endl;
                return 0;
            }
        }
    }

    cout << "No solution found." << endl;

    return 0;
}