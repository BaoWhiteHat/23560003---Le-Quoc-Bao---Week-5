#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestConsecutiveDifference(const vector<int> &nums)
{
    int maxDifference = INT_MIN;
    for (size_t i = 0; i < nums.size() - 1; ++i)
    {
        int diff = nums[i + 1] - nums[i];
        maxDifference = max(maxDifference, diff);
    }
    return maxDifference;
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

    cout << "Largest consecutive difference: " << largestConsecutiveDifference(nums) << endl;
    return 0;
}
