// stack oprtations 

// The functions associated with stack are: 
// empty() – Returns whether the stack is empty – Time Complexity : O(1) 
// size() – Returns the size of the stack – Time Complexity : O(1) 
// top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
// push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
// pop() – Deletes the top most element of the stack – Time Complexity : O(1) 

#include <stack>
#include <iostream> 

using namespace std;

void showstack(stack<int> s){
    while(!s.empty()){
        cout<<"\t"<<s.top();
        s.pop();
    }
    cout<<endl;

}

int main() {
    stack<int> ss;
    ss.push(123);
    ss.push(74);
    ss.push(52);
    ss.push(34);
    ss.push(13);

    cout<<"\nThe stack is:";
    showstack(ss);

    cout<<"\nSize of stack: "<<ss.size();
    cout<<"\nFirst element of stack: "<<ss.top();
    
}