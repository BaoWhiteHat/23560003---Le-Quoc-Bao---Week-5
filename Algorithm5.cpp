#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int j = 1; j < n; ++j)
    {                     
        int key = arr[j]; 
        int i = j - 1;

        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            --i;
        }

        arr[i + 1] = key;
    }
}

int main()
{
    vector<int> numbers = {3, 2, 4, 1, 5};

    cout << "Original List: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    insertionSort(numbers);

    cout << "Sorted List: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
