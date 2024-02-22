// CPP code to illustrate Queue in 
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void shows(stack<int> g){
    while(!g.empty()){
        cout<<g.top()<<" ";
        g.pop();
    }
    cout<<'\n';
}

void showq(queue<int> g)
{
	while (!g.empty()) {
		cout << g.front()<<" ";
		g.pop();
	}
	cout << '\n';
}



int main()
{
    stack<int> s;
	queue<int> q;

	s.push(10); q.push(10);
    s.push(20); q.push(20);
    s.push(30); q.push(30);

    cout<<"The stack is: ";
    shows(s);
	cout << "The queue is: ";
	showq(q);

	cout << "popped stack: ";
	s.pop();
	shows(s);
    cout << "popped queue: ";
	q.pop();
	showq(q);

	return 0;
}
