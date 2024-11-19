#include <iostream>
#include <vector>
using namespace std;

int countNegatives(const vector<int> &nums)
{
    int count = 0;
    for (int num : nums)
    {
        if (num < 0)
        {
            count++;
        }
    }
    return count;
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

    cout << "Number of negative integers: " << countNegatives(nums) << endl;
    return 0;
}
