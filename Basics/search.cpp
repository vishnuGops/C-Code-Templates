
#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int array_size)
{
    for(int i = 0; i < array_size; i++)
        cout<< a[i] << ",";

}

int main()
{
    int a[] = {5,2,5,1,7,23,73,3,2,6,3,25,3,2,57,4,8};
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "The array is: \n";
    show(a , asize);

    sort(a , a + asize);
    cout << "\n \nThe sorted array is: \n";
    show(a, asize);
    int s;
    cout << "\nEnter the element to search for:\n";
    cin >>  s ;

    if(binary_search(a , a + asize, s))
        cout << " \nElement found in array";
    else
        cout << " \nElement not found in array";

    return 0;
}

// Created by vishv on 2/16/2021.
//

