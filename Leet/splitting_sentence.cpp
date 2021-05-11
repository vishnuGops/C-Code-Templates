// unordered_map is an associated container that stores elements formed by
// combination of key value and a mapped value. The key value is used to
// uniquely identify the element and mapped value is the content associated
// with the key. Both key and value can be of any type predefined or
// user-defined.

// Internally unordered_map is implemented using Hash Table, the key
// provided to map are hashed into indices of hash table that is why
// performance of data structure depends on hash function a lot but on an
// average the cost of search, insert and delete from hash table is O(1).

#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{

    unordered_map<string, int> umap;

    umap["Vishnu"] = 10020;
    umap["Ram"] = 203;
    umap["krishha"] = 394;
    umap["hellp"] = 3224;

    for (auto i : umap)
    {
        cout << i.first << " : " << i.second << endl;
    }
}