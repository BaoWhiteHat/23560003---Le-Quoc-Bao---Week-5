#include <iostream>
#include <vector>
using namespace std;

int largestEvenIndex(const vector<int> &nums)
{
    int maxEven = INT_MIN;
    int maxIndex = 0;

    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (nums[i] % 2 == 0 && nums[i] > maxEven)
        {
            maxEven = nums[i];
            maxIndex = i + 1;
        }
    }

    return maxIndex;
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

    cout << "Location of the largest even integer: " << largestEvenIndex(nums) << endl;
    return 0;
}
