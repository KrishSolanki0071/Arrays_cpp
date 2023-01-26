//Binary Search in an array

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{   int arr1[] = {1,5,2,4,3,6,8,7};
    int n = sizeof(arr1) / sizeof(int);
    

    sort(arr1,arr1 + n);
    cout<<"The sorted array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<< " ";
    }

    int key = 0;

    cout<<endl<<"Enter the Element you wish to find in the array: "<<endl;
    cin>>key;
    int s = 0;
    int e = n - 1;
    cout<<endl ;

    while(s <= e)
    {
        int mid = (s + e) / 2;
        
        if(arr1[mid] == key)
        {
            cout<<key<<" is in the array at position : "<<mid+1<<endl;
            break;
        }
        if(arr1[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    
        // return -1;
    }
    
    
    return 0;

}    