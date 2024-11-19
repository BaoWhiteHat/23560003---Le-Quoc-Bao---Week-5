#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &arr, int x)
{
    int i = 0;              
    int j = arr.size() - 1; 

    while (i <= j)
    {
        int m = (i + j) / 2; 
        if (arr[m] == x)
        {
            return m + 1; 
        }
        if (arr[m] < x)
        {
            i = m + 1; 
        }
        else
        {
            j = m - 1; 
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

    int result = binarySearch(arr, x);
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
