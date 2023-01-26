//Using Insertion Sort in an array to sort it(via function)


#include<iostream>
using namespace std;

//declaring selection sort function for sorting the array

int insertion_sort(int arr[],int n)   //bracket me pehle arr liya hai fir n, to niche jab func call hoga to uske bracket me bhi yahi order hoga 
{
    for (int i = 1; i <= n - 1; i++)
    {
        int e = arr[i];   //unsorted array wale part me current element ki value copy karne k liye
        //place the current element at 'right' position in the sorted part

        int j = i - 1;
        while (j >= 0 and arr[j] > e)
        {
            arr[j + 1] = arr[j];
            j = j - 1;

        }

        arr[j + 1] = e;
        
    }
             
}

int main()
{
    int n;
    
    cout<<"Enter the size of Array: "<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter an Array of size "<<n<<": "<<endl;
    for (int i = 0; i < n; i++) 
    {
    cin >> arr[i];
    }

    
    cout<<"The Unsorted Array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    
    insertion_sort(arr,n);    //yaha par bracket me order vahi hoga jo upar function hai i.e. pehle arr liya fir n
    cout<<endl<<"The Sorted Array is: : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}    