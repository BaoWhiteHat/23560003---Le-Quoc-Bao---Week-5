#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> findDuplicates(const vector<int> &nums)
{
    vector<int> duplicates;
    for (size_t i = 1; i < nums.size(); ++i)
    {
        if (nums[i] == nums[i - 1] && (duplicates.empty() || nums[i] != duplicates.back()))
        {
            duplicates.push_back(nums[i]);
        }
    }
    return duplicates;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in nondecreasing order:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    vector<int> duplicates = findDuplicates(nums);
    cout << "Duplicates: ";
    for (int num : duplicates)
    {
        cout << num << " ";
    }
    cout << "There are no duplicates" << endl;

    return 0;
}
