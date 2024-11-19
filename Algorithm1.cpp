
#include <iostream>
#include <vector>
using namespace std;

int findMax(const vector<int> &nums)
{
    int max = nums[0];

    for (size_t i = 1; i < nums.size(); ++i)
    {
        if (nums[i] > max)
        {                  
            max = nums[i]; 
        }
    }

    return max;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int maxElement = findMax(nums);
    cout << "The maximum element is: " << maxElement << endl;

    return 0;
}
