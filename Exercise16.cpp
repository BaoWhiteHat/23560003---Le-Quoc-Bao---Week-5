#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSmallest(const vector<int> &nums)
{
    int minVal = nums[0];
    for (int num : nums)
    {
        if (num < minVal)
        {
            minVal = num;
        }
    }
    return minVal;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    cout << "Smallest integer: " << findSmallest(nums) << endl;
    return 0;
}
