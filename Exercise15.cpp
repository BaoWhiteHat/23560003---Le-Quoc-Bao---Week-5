#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findInsertionPoint(const vector<int> &nums, int x)
{
    int left = 0;
    int right = nums.size();
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] < x)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

void insertInOrder(vector<int> &nums, int x)
{
    int position = findInsertionPoint(nums, x);
    nums.insert(nums.begin() + position, x);
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in increasing order:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int x;
    cout << "Enter the integer to insert: ";
    cin >> x;

    insertInOrder(nums, x);

    cout << "Updated list: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
