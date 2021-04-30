#include <iostream>
#include <algorithm>
#include <vector>
#include <valarray>

using namespace std;

int main() {
    valarray<string> vect ;
    string  n ="hello";
    string x = "hello world";

    x.erase(3 ,1);

    cout<<x;

}