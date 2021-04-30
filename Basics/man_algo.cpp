//Manipulating algorithm
//
//arr.erase(pos)
//arr.erase(unique(arr.begin(),arr.end()),arr.end())
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[] = {12,31,41,2,31,4,37,12,14,12,62,6,13};
    int asize = sizeof(arr) / sizeof(arr[0]);
    vector<int> vert(arr, arr+asize);
    vector<int> temp(arr, arr+asize);

    cout<<"The Vector is: \n";
    for(int i =0; i<vert.size(); i++)
        cout<<vert[i]<<" ";

    //removing the sencond element

    vert.erase(vert.begin()+1);

    //vector after deleting the 2nd element in the array
    cout<<"\nVector after deleting the 2nd element in the array:\n";
    for(int i=0; i<vert.size(); i++)
        cout<<vert[i]<<" ";

    //sorting the array
    sort(vert.begin(), vert.end());

    cout<<"\nThe sorted array: \n";

    for(int i = 0; i< vert.size();i++)
        cout<<vert[i]<<" ";

    //removing the duplicates
    vert.erase(unique(vert.begin(),vert.end()),vert.end());

    cout<<"\nThe array after removing the duplicates:\n";
    for(int i =0; i< vert.size(); i++)
        cout<<vert[i]<<" ";


    cout<<endl;

    cout<<"\nThe array in its next permutation:\n";
    next_permutation(vert.begin(), vert.end());

    for(int i = 0 ; i< vert.size(); i++)
        cout<<vert[i]<<" ";

    cout<<"\nThe array in its previous permutation: \n";
    prev_permutation(vert.begin(),vert.end());
    for(int i=0; i<vert.size();i++)
        cout<<vert[i]<<" ";


    //Finding the index of the max element in the array
    cout<<"\nThe array:\n";
    for(int i =0; i< temp.size();i++)
        cout<<temp[i]<<" ";
    cout<<"\nIndex of the max element in the array:\n";
    cout<<distance(temp.begin(),max_element(temp.begin(),temp.end()));



    return 0;

}