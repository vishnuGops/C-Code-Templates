#include <iostream>
#include <queue>

using namespace std;

void showq(priority_queue<int> pq1) {
    priority_queue<int> pq = pq1;
    while(!pq.empty()) {
        cout<<'\t'<<pq.top();
        pq.pop();

    }
    cout<<endl;
}

int main() {
    priority_queue<int> pqq;

    pqq.push(20);
    pqq.push(10);
    pqq.push(70);
    pqq.push(40);
    pqq.push(25);

    cout<<"\nThe queue is:";
    showq(pqq);

    cout<<"\n.top() of queue: "<<pqq.top();
}