// Partition algorithms

// is_partitioned(start, end, cond)?
// partition(start, end, cond);
// stable_partition(start, end, cond);
// partition_point(start, end, cond)
// partition_copy(start, end, new_start, new_end, cond)
// count_if(start, end , cond)




#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[] = {2,15,6,23,3,6,1,46,39,1};
    int a = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr+a);

    cout<<"The vector is:\n";
    for(int i=0; i < vect.size();i++)
    {
        cout<<vect[i]<<" ";
    }

    //check if array partitioned already
    is_partitioned(vect.begin(), vect.end(), [](int x){return x%2==0;})?
        cout<<"\nVector is partitioned\n":
        cout<<"\nVector is not partitioned\n";


    //partition the array
    partition(vect.begin(), vect.end(),[](int x){return x%3==0;});
    //int flag = 0;    
    is_partitioned(vect.begin(), vect.end(), [](int x){return x%3==0;})?
        cout<<"\nThe array is partitioned\n":
        cout<<"\nThe Array is not partitioned\n";

    cout<<"\nThe partitioned array is:\n";
    for(int i=0; i<vect.size();i++)
        cout<<vect[i]<<" ";

    //stable partitioning the array
    stable_partition(vect.begin(), vect.end(), [](int x){ return x%2==0;});
    cout<<"\nThe vector after stable partition:\n";
    for(int &x : vect) cout << x << " ";
    cout<<endl;
    vector<int>::iterator it1;
    auto point = partition_point(vect.begin(), vect.end(), [](int x){return x%2==0;});
    //array with true condition
    cout<<"\nArray with true conditions:\n";
    for(it1 = vect.begin(); it1!=point;it1++)
    cout<< *it1 << " ";
    cout<<endl;


    //Vector copy
    vector<int> temp;
    vector<int> temp1;

    int num = count_if(vect.begin(), vect.end(), [](int x){return x%2==0;});
    
    temp.resize(num);
    temp1.resize(vect.size()-num);

    partition_copy(vect.begin(), vect.end(), temp.begin(), temp.end(),[](int x){return x%2==0;});
    partition_copy(vect.begin(), vect.end(),temp1.begin(), temp1.end(), [](int x){return x%2 != 0;});
    vector<int>::iterator it2;
    vector<int>::iterator it3;

    cout<<"\nVector which matches the true condition:\n";
    for(it2 = temp.begin();it2<temp.end();it2++)
    cout<<*it2<<" ";
    cout<<endl;

    cout<<"\nVector which matches the false condition:\n";
    for(it3 = temp1.begin();it3<temp1.end();it3++)
    cout<<*it3<<" ";
    cout<<endl;
    


    return 0;
}