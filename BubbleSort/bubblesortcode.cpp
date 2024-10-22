/*

// 1st methods


#include <iostream>
using namespace std;
int main()
{
    // given array
    int arr[] = {1, 0, 40, -7, -30};
    int n = 5; // array size
               // array print
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    // bubble sort
    //  how many times loops passes
    for (int i = 0; i < n - 1; i++) // n-1 passes
    {
        // traverse
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swapping
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                //or inbuild swap function 
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

// int arr[] = {1,5,4,2,3,6};
// int n =6;
// 1  5  4  2  3  6 // given array 
// 1  2  3  4  5  6 // sorted order

// 1  5  -4  2  3  6
// -4  1  2  3  5  6

// 1  0  -4  2  3  6
// -4  0  1  2  3  6

// 1  0  4  29  3  6
// 0  1  3  4  6  29

//  int arr[] = {1, 0, 4, 7,3,6, -30};
//  int n =7;

// 1  0  4  7  3  6  -30
// -30  0  1  3  4  6  7

// 1  0  4  -77  3  6  -30  
// -77  -30  0  1  3  4  6 

//  int arr[] = {1, 0, 4, -7, -30};
//  int n = 5;

// 1  0  4  -7  -30  
// -30  -7  0  1  4 



//  int arr[] = {1, 0, 40, -7, -30};
//  int n = 5;

// 1  0  40  -7  -30  
// -30  -7  0  1  40



*/



/*


// 2nd methods 
// optimize way

#include <iostream>
using namespace std;
int main()
{
   
    int arr[] = {5,-40,9999,2,1};
    int n = 5; 
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j <n - 1 - i; j++) // here changes add -i(n-1-i)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

// 5  4  3  2  1  
// 1  2  3  4  5 

// 5  -40  0  2  1  
// -40  0  1  2  5 

// 5  -40  9999  2  1  
// -40  1  2  5  9999

*/


/*
// best optimize way
// 3rd methods

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    // sorting
    // bubble sort optimised
    bool flag = true;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
       flag=false;
        break;
    }
    if(flag==true)
    cout<<"sorted";
    else
    cout<<"unsorted";


}
//  int arr[]={5,4,3,2,1};
//  unsorted

//   int arr[]={1,2,3,4,5};
//   sorted


*/



#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
   
    int arr[] = {5,-40,99,999,1};
    int n = 5; 
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    
    for (int i = 0; i < n - 1; i++) 
    {
        bool flag=true;// array is already sorted
        // this is the check mark

        for (int j = 0; j < n - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1])
            {
                //swap
                swap(arr[j], arr[j + 1]);
                flag=false;
            }
        }
        if(flag==true) // swap didn't happen -> array is sorted
        {
            break;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
// 5  -40  99  999  1  
// -40  1  5  99  999


