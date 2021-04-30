
//Array algorithms
//
//all_of() :used to loop each element to check for constraint

#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int ar[] = {5,15,6,17,8,3,2,78,28,63,2,-35,12,72,25};
    int asize = sizeof(ar) / sizeof(ar[0]);
    vector<int> vec(ar,ar+asize);

    //function operates on whole set of array to check all elements
    //saves time to run loop and check each
    cout<<"This is the use of all_of:\n";
    all_of(vec.begin(),vec.end(), [](int x) {return x>0;})?
    cout<<"All are positive elements":
    cout<<"Not all elements are positive";


    //any_of() to see if atleast one element satisfies the constraint
    cout<<"\n \nThis is the use of any_of: \n";
    any_of(vec.begin(), vec.end(),[](int x){return x<0;})?
        cout<<"There exists atleast 1 negative number":
        cout<<"There are no positive elements";

    
    //use of none_of to check if none_of elements satisfies the constraint
    cout<<"\n \nThis is the use of none_of:\n";
    none_of(vec.begin(), vec.end(),[](int x){return x<0 ; })?
        cout<<"No negative numbers":
        cout<<"There are negative number";

    //copy_n() to copy array from one to another
     int arr[6] = {2,5,26,62,25,12};
     int arrsize = sizeof(arr) / sizeof(arr[0]);
     sort(arr,arr + arrsize);
     int temp[6];

     copy_n(arr, 6, temp);

     cout<<"\nThe copied array:\n";
     for(int i = 0; i< 6; i++)
     {
         cout<<temp[i] <<" ";

     }


    //iota() to assign continous values to array

    int a[6] = {0};
    iota(a,a+6,20);

    cout<<"\nValue of new array after assigning values:\n";
    for(int i=0; i<6; i++)
        cout<<a[i]<<" ";

        return 0;

}