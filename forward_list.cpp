#include <algorithm>
#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> list1;
    forward_list<int> list2;

    forward_list<int>::iterator ptr;
    forward_list<int>::iterator it;

    list1.assign({2,4,6,26,1,3,7});
    
    list2.assign(5,10);

    for(int&i : list1)
        cout<< i << " ";
    cout<<endl;

    
    for(int&i : list2)
        cout<< i << " ";
    cout<<endl;


    cout<<"\nPush_front() for list 1: \n";
    list1.push_front(11);

    
    for(int&i : list1)
        cout<< i << " ";
    cout<<endl;

    cout<<"\nemplace_front for the list 2: \n";
    list2.emplace_front(20);

    
    for(int&i : list2)
        cout<< i << " ";
    cout<<endl;


    // list1.pop_front();
    
    // for(int&i : list1)
    //     cout<< i << " ";
    // cout<<endl;
    cout<<"\n\nInsert after on list 1:\n";
    ptr = list1.insert_after(list1.begin() ,{1,2,3});

    
    for(int&i : list1)
        cout<< i << " ";
    cout<<endl;


    cout<<"\nEmplace_after on list 2: \n";
    it = list2.emplace_after(list2.begin(),2 );

    for(int&i : list2)
        cout<< i << " ";
    cout<<endl;

    cout<<"\nErase_after on list 1: \n";

    ptr = list1.erase_after(ptr);

    for(int&i : list1)
        cout<< i << " ";
    cout<<endl;
    

    cout<<"\nRemove 10 from list 2:\n";

    list2.remove(10);

    for(int&i : list2)
        cout<< i << " ";
    cout<<endl;


    cout<<"\nRemove_if on list 1 if element greater than 15: \n";

    list1.remove_if([](int x) { return x>15;});

    for(int&i : list1)
        cout<< i << " ";
    cout<<endl;

    //splice or move items from list 2 to 1
    list2.splice_after(list2.begin(), list1);
    cout<<"\nAfter Splicing: \n";
    for(int&i : list2)
        cout<< i << " ";
    cout<<endl;

    return 0;



}


// front()– This function is used to reference the first element of the forward list container.
// begin()– begin() function is used to return an iterator pointing to the first element of the forward list container.
// end()– end() function is used to return an iterator pointing to the last element of the list container.
// cbegin()– Returns a constant iterator pointing to the first element of the forward_list.
// cend()– Returns a constant iterator pointing to the past-the-last element of the forward_list.
// before_begin()– Returns a iterator which points to the position before the first element of the forward_list.
// cbefore_begin()– Returns a constant random access iterator which points to the position before the first element of the forward_list.
// max_size()– Returns the maximum number of elements can be held by forward_list.
// resize()– Changes the size of forward_list.