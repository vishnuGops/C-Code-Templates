// Maps are associative containers that store elements in a mapped fashion.
// Each element has a key value and a mapped value. No two mapped values
// can have same key values.

#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{

    map<int, int> quiz;

    quiz.insert(pair<int, int>(1, 40));
    quiz.insert(pair<int, int>(2, 20));
    quiz.insert(pair<int, int>(3, 30));
    quiz.insert(pair<int, int>(4, 60));
    quiz.insert(pair<int, int>(5, 10));
    quiz.insert(pair<int, int>(6, 80));
    quiz.insert(pair<int, int>(7, 30));
    quiz.insert(pair<int, int>(8, 90));

    // printing map gquiz1
    map<int, int>::iterator itr;
    cout << "\nThe map quiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = quiz.begin(); itr != quiz.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    //assigning elements from one map to another
    map<int, int> quiz2(quiz.begin(), quiz.end());

    // printing map gquiz1
    cout << "\nThe map quiz2 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = quiz2.begin(); itr != quiz2.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    //remove elements from quiz2 who have key 4
    quiz2.erase(4);

    cout << "Map 2 after removing all values with key =4 " << endl;
    for (itr = quiz2.begin(); itr != quiz2.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    cout << endl;

    //remove elements from quiz1 who have key less than 3
    quiz.erase(quiz.begin(), quiz.find(3));

    cout << "Map 1 after removing all values less than key 3 " << endl;
    for (itr = quiz.begin(); itr != quiz.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    cout << endl;

    //lower bound and upper bound
    cout << "quiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << quiz.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << quiz.lower_bound(5)->second << endl;
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = ";
    cout << quiz.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << quiz.upper_bound(5)->second << endl;

    return 0;
}