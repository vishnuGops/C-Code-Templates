// Vector functions

// begin()
// end()
// rbegin()
// rend()
// cbegin()
// cend()
// erbegin()
// erend()

// size()
// max_size()
// capacity()
// resize()
// empty()
// shrink_to_fit()
// reserve()

#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>
using namespace std;

int main(){
    vector<int> temp;
    vector<int> s;
    for(int i =1; i<6; i++)
        temp.push_back(i);

    for(int i =1; i<11;i++)
        s.push_back(i*10);

    for(int i = 0; i<5; i++)
        cout<< temp[i]<<" ";
    cout<<endl;

    cout<<"Size of Vector:"<<temp.size()<<endl;
    cout<<"Capacity of Vector:"<<temp.capacity()<<endl;
    cout<<"Max Size of Vector:"<<temp.max_size()<<endl;
    //temp.clear();
    if(temp.empty())
        cout<<"\nVector is empty";
    else
        cout<<"\nVector not empty";

    temp.resize(3);
    cout<<"\nVector after resizing\n";
    for(int i=0; i < temp.size(); i++)
        cout<<temp[i]<<" ";
    
    temp.shrink_to_fit();

    //Element access
    //reference operators

    cout<<"\n \nThe second vector is:\n";
    for(int i= 0; i<s.size();i++)
        cout<<s[i]<<" ";
    cout<<endl;

    cout<<"\nReference operator: "<<s[2];
    cout<<"\nat operator: "<< s.at(4);
    cout<<"\nFront operator: "<< s.front();
    cout<<"\nBack operator: "<<s.back();

    int *pos = s.data();
    cout<<"\nData operator returns the first element: "<<*pos;

    //insertion and deletion
    
    temp.insert(temp.begin(),45+3);
    s.erase(s.begin());

    temp.emplace(temp.begin(), -23);
    s.emplace_back(200);
    //swapping the 2 vectors
    cout<<"\n \nBefore swapping:\n";
    cout<<"\nVector 1:\n";
    //s.clear();

    for(int i = 0;i<temp.size(); i++)
        cout<<temp[i] <<" ";

    cout<<"\nVector 2:\n";
    for(int i = 0;i<s.size(); i++)
        cout<<s[i] <<" ";
    
    temp.swap(s);

    cout<<"\n \nAfter swapping:\n";
    cout<<"\nVector 1:\n";
    for(int i = 0;i<temp.size(); i++)
        cout<<temp[i] <<" ";

    cout<<"\nVector 2:\n";
    for(int i = 0;i<s.size(); i++)
        cout<<s[i] <<" ";

}