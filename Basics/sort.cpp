//sort algorithm STL
#include <algorithm>
#include <iostream>

using namespace std;
//
//void show(int a[], int array_size) {
//    for (int i = 0; i<array_size; i++) {
//        cout << a[i] << " ";
//    }
//}
//    int main()
//    {
//        int a[] = { 1, 3,5,2,5,1,2,6,12,5,6,3,8};
//
//        int asize = sizeof(a) / sizeof(a[0]);
//        cout << "Array before sorting is : \n";
//
//        show(a, asize);
//
//        sort(a , a + asize);
//
//        cout << " \n The array after sorting is : \n";
//
//        show(a , asize);
//
//        return 0;
//    }
//
void show(int a[], int array_size)
{
    for(int i =0; i < array_size; i++)
    {
        cout << a[i] << " ";
    }
    
}

int main()
{
    int a[] = { 5,2,5,1,7,23,73,3,2,6,3,25,3,2,57,4,8};

    cout << "The array before sorting: \n" ;
    int asize = sizeof(a) / sizeof(a[0]);
    //sizeof returns size in bytes so divide by size of each element

    //cout << "size : " << sizeof(a) << "\n";

    show(a , asize);

    sort(a, a + asize);

    cout << "\n \nThe array after sorting : \n" ;

    show(a , asize);

    return 0;


}


// Created by vishv on 2/16/2021.
//

