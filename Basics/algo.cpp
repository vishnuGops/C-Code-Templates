//non manipulating algo

//sort(first, last)
//reverse(first, last)
//*max_element(first, last)
//*min_element(first, last)
//accumulate(first, last, value of sum)
//binary_search(first, last, ele)
//lower_bound(first, last, ele) find elements lesser than ele
//upper_bound(first, last, ele) find elements greater than ele
//count(first,last, ele)
//find(first, last, ele)
//


#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    //convert array to vector
    int arr[] = {12,31,41,2,54,4,37,12,14,5,62,6,13};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vert(arr, arr+n);
    int n1;
    cout << "The vector is:\n";
    for(int i =0; i<n; i++)
    {
        cout << vert[i]<< ",";
    }

    //sorting the vector
    sort(vert.begin(), vert.end());
    cout<<"\nThe sorted vertex is:\n";

    for(int i =0; i<n; i++)
        cout<< vert[i] << " ";

    //reverse the array
    reverse(vert.begin(), vert.end());
    cout<<"\nThe reversed vertex is:\n";
    for(int i =0; i<n; i++)
        cout<<vert[i] << " ";

    cout<<"\nThe Maximum element is:\n";
    cout<<*max_element(vert.begin(), vert.end());

    cout<<"\nThe minimum element is:\n";
    cout<<*min_element(vert.begin(), vert.end());

    //accumulate to sum the elements in the vector
    cout<<"\nSummation of the vector elements\n";
    cout<< accumulate(vert.begin(), vert.end(), 0);


//    //binary search
//    cout<<"\nEnter the element to search: \n";
//    if(binary_search(arr,  arr + 10,12))
//        cout<<"Element found";
//    else
//        cout<<"Element not found";



    //count and find in the vertex
    //to count the occourances in the vertex
    cout<<"\nEnter the element to count:\n";
    cin>>n1;
    cout<<"Count of element: "<<count(vert.begin(),vert.end(),n1);

    //to find element in the vector
    cout<<"\nEnter the element to find:";
    cin>>n1;
    find(vert.begin(), vert.end(), n1) != vert.end()?
    cout<<"\nElement found": cout<<"\nElement not found";


    //lower bound and upper bound
    cout<<"\nLower bound: \n";
    auto q = lower_bound(vert.begin(),vert.end(),20);
    cout<<q-vert.begin() <<endl;

    cout<<"\nUpper bound: \n";
    auto p = upper_bound(vert.begin(),vert.end(),20);
    cout<<p-vert.begin() <<endl;

    return 0;


}