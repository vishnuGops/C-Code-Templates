// Queues

// empty() – Returns whether the queue is empty.
// size() – Returns the size of the queue.
// queue::swap() in C++ STL: Exchange the contents of two queues but the queues must be of same type, although sizes may differ.
// queue::emplace() in C++ STL: Insert a new element into the queue container, the new element is added to the end of the queue.
// queue::front() and queue::back() in C++ STL– front() function returns a reference to the first element of the queue. back() function returns a reference to the last element of the queue.
// push(g) and pop() – push() function adds the element ‘g’ at the end of the queue. pop() function deletes the first element of the queue.

#include <iostream> 
#include <queue>

using namespace std;

void showq(queue<int> q)
{
    queue<int> q1 = q;
    while ( !q1.empty()) {
        cout<<"\t"<<q1.front();
        q1.pop();
        
    }
    cout<<endl;
}

int main() {
    queue<int> cue;
    cue.push(20);
    cue.push(30);
    cue.push(50);

    cout<<"\nThe queue is:";
    showq(cue);

    cout<<"\nSize of queue: "<<cue.size();
    cout<<"\nFirst element of queue using .front(): "<<cue.front();
    cout<<"\nLast element of queue using .back(): "<<cue.back();

    cout<<"\nPopping element from queue: ";
    cue.pop();
    showq(cue);
}