#include <iostream>
using namespace std;

struct MyStack
{
	int _mystack;
	MyStack* next;
};
void output(MyStack* st)
{
	while (st)
	{

	}
}

void clear(MyStack*& st, int n)
{
	MyStack* temp;
	int y = 0;
	MyStack* x = st;
	int t = n;
	while (t != 0)
	{
		cout << "\n " << y << "" << n - y;
		temp = new MyStack;
		temp = x;
		x = x->next;
		delete temp;
		y++;
		t--;
	}
}

int main()
{
	MyStack* stack = nullptr;
	int num;
	unsigned int n;

	return 0;
}