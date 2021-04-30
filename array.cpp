#include <algorithm>
#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int,6> ar = {1,4,56,27,12,51};
    array<int, 6> ar1 = {42,16,36,3,7,5};

    //printing array in different ways
    //using at

    cout<<"\nArray is using at():\n";
    for(int i=0; i< ar.size(); i++)
    {
        cout<<ar.at(i)<<" ";
    }
    cout<<endl;

    cout<<"\nPrinting array using get():\n";

    cout<< get<0>(ar) <<" "<<get<1>(ar)<<" ";
    cout<< get<2>(ar) <<" "<<get<3>(ar)<<" ";
    cout<< get<4>(ar) <<" "<<get<5>(ar)<<" ";

    cout<<"\n\nPrinting array using []:\n";
    for(int i=0; i< ar.size(); i++)
        cout<<ar[i]<<" ";


    cout<<"\nFirst element of array: "<< ar.front();
    cout<<"\nLast element of array: "<<ar.back();

    cout<<"\nSwapping 2 arrays: ";
    ar.swap(ar1);
    cout<<"\nArray after swapping:\n";
    for(int i=0; i< ar.size(); i++)
        cout<<ar[i]<<" ";

    ar1.fill(2);
    cout<<"\nArray2 after fill:\n";
    for(int i=0; i< ar1.size(); i++)
        cout<<ar1[i]<<" ";

    
}