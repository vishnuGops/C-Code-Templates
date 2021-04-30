// valarray class to provide math operations to arrays

// apply(): applies manipulation to its arguments to all valarray and returns
// new valarray

// sum(): returns the summation of the array elements

#include <algorithm>
#include <iostream>
#include <valarray>

using namespace std;

int main() {

    valarray<int> varr = {10,2,23,15,51,25,22,6,11};

    cout<<"The actual valarray:\n";
    for(int &x:varr) cout<<x<<" ";
    cout<<endl;

    valarray<int> varr1;

    varr1 = varr.apply([](int x){return x+10;});

    cout<<"\nThe new valarray is:\n";
    for(int &x: varr1) cout<< x << " ";
    cout<< endl;

    //to find sum
    cout<<"\nThe sum of old array is:";
    cout<< varr.sum() <<endl;
    cout<<"\nThe sum of the new array is:";
    cout<< varr1.sum() << endl; 

    //max and min 
    cout<<"\nThe max and min of the old array:";
    cout<<"\nMax: "<<varr.max()<<"\nMin: "<<varr.min()<<endl;


    cout<<"\nThe max and min of the new array:";
    cout<<"\nMax: "<<varr1.max()<<"\nMin: "<<varr1.min()<<endl;


    //shift and cshift
    cout<<"\nShifting and circular shifting the valarray\n";
    varr = varr.shift(2);
    for(int &x:varr) cout<< x << " ";
    cout<<endl;

    cout<<"\nCircular shifting the valarray\n";
    varr1 = varr1.cshift(-4);
    for(int &x:varr1) cout<< x<<" ";
    cout<<endl;

    //swap old valarray with newarray
    varr.swap(varr1);

    cout<<"\nOld array after swapping:\n";
    for(int &x:varr) cout<< x <<" ";

    cout<<"\nNew array after swapping:\n";
    for(int &x:varr1) cout<< x <<" ";
    

}