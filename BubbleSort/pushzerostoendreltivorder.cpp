
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 9;
    int arr[] = {5, 0, 1, 2, 0, 0, 4, 0, 3};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // sort -> relative order
    //bubble sort
    for (int i = 0; i < n - 1; i++)
    { // n-1 passes
        // important / traverse 
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] == 0)
                swap(arr[j], arr[j + 1]);
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}