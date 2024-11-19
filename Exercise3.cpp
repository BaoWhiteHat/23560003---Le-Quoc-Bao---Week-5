#include <iostream>
#include <vector>
using namespace std;

int sumOfList(const vector<int> &nums)
{
    int sum = 0;
    for (int num : nums)
    {
        sum += num;
    }
    return sum;
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

    cout << "Sum of all integers: " << sumOfList(nums) << endl;
    return 0;
}
