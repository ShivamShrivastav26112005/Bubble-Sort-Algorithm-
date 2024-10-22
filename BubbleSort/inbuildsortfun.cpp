// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v;
//     v.push_back(3);
//     v.push_back(1);
//     v.push_back(5);
//     v.push_back(2);
//     v.push_back(4);
//     for(int i=0; i<5; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     sort(v.begin(), v.end());
//     for(int i=0; i<5; i++)
//     {
//         cout<<v[i]<<" ";
//     }
// //   3 1 5 2 4
// //   1 2 3 4 5
// }


// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v(5);
//    // vector input
//     for(int i=0; i<5; i++)
//     {
//         cin>>v[i];
//     }
//     cout<<endl;
//     // sorting
//     sort(v.begin(), v.end());
//     // after sorting vector output
//     for(int i=0; i<5; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//      // 1 8 5 3 9

//      // 1 3 5 8 9

// }


// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v(5);
//    // vector input
//     for(int i=0; i<5; i++)
//     {
//         cin>>v[i];
//     }
//     cout<<endl;
//     // sorting opposite(reverse)-> this is not a correct manner
//     // it gives an error
//     sort(v.end(), v.begin()); // syntax is not correct
//     // after sorting vector output
//     for(int i=0; i<5; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//      // 1 8 5 3 9

//      // does not print anything -> error 
// }


// this is write manner 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);
   // vector input
    for(int i=0; i<5; i++)
    {
        cin>>v[i];
    }
    cout<<endl;
    // first sorting then reverse 
    sort(v.begin(), v.end()); // this is known as inbuild sorting
    // ek array ko sort karne ke liye time complexity is 
    // time complexity is O(nlogn) it is best for sorting t.c.
    reverse(v.begin(), v.end());
    // after sorting vector output
    for(int i=0; i<5; i++)
    {
        cout<<v[i]<<" ";
    }
//   2 5 4 8 6 

//   8 6 5 4 2

}