#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int> &arr, int x)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i + 1; 
        }
    }
    return 0; 
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int x;
    cout << "Enter the value to search for: ";
    cin >> x;

    int result = linearSearch(arr, x);
    if (result != 0)
    {
        cout << "Element found at position: " << result << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }
    return 0;
}
