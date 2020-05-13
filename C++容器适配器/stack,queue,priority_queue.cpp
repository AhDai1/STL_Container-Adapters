#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<stack>
#include<list>
#include<string>
#include<queue>
#include<vector>
using namespace std;
int main()
{
#if 0
	stack<string, list<string>> words;
	words.push("hello");
	cout << words.top() << endl;
	list<string> s{ "one", "two" };
	stack<string, list<string>> num(s);
	cout << num.top() << endl;
	num.pop();
	cout << num.top() << endl;
	stack<string, list<string>> copy_stack(num);
#endif
#if 0
	list<int> n{ 3,4,12,7,78 };
	queue<int, list<int>> num(n);
	while (!num.empty())
	{
		std::cout << num.front() << " ";
		num.pop();
	}
	cout << endl;
#endif

	vector<int> num = { 6,7,3,8,1 };
	priority_queue<int, vector<int>, greater<int>> nn{ begin(num),end(num) };
	while (!nn.empty())
	{
		cout << nn.top() << " ";
		nn.pop();
	}
	cout << endl;

	return 0;
}
