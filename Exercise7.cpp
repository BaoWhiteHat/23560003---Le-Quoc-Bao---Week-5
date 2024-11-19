#include <iostream>
#include <vector>
using namespace std;

int lastEvenIndex(const vector<int> &nums)
{
    for (int i = nums.size() - 1; i >= 0; --i)
    {
        if (nums[i] % 2 == 0)
        {
            return i + 1;
        }
    }
    return 0;
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

    cout << "Location of the last even integer: " << lastEvenIndex(nums) << endl;
    return 0;
}
