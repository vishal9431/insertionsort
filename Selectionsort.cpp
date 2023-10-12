#include<iostream>
#include <vector>
#include<climits>
using namespace std;
int main()
{
    int arr[4] = {4,-2,9,6};
    int n=4;
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++)
    {
        int mini = INT_MAX;
        int minix =-1;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<mini)
            {
                mini = arr[j];
                minix = j;
            }
        }
        swap(arr[i],arr[minix]);
    }
    for(int r: arr)
    {
        cout<<r<<" ";
    }
}
// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int arr[4] = {4, -2, 9, 6};
//     int n = 4;
    
//     for(int i = 0; i < n ; i++) {
//         cout << arr[i] << " ";
//     }

//     for(int i = 0; i < n - 1; i++) {
//         int mini = INT_MAX;
//         int minix = -1;

//         for(int j = i; j < n; j++) {
//             if(arr[j] < mini) {
//                 mini = arr[j];
//                 minix = j;
//             }
//         }
        
//         swap(arr[i], arr[minix]);
//     }

//     for(int r: arr) {
//         cout<<endl;
//         cout << r << " ";
//     }
    
//     return 0;
// }
