#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<memory>
#include<queue>
#include<vector>
#include<string>
using namespace std;
int main()
{
	auto comp = [](const shared_ptr<string>&p1, const shared_ptr<string>&p2)
	{
		return *p1 < *p2;
	};
	vector<shared_ptr<string>> words;
	string word;
	while (true)
	{
		if ((cin >> word).eof())
		{
			cin.clear();
			break;
		}
		words.push_back(make_shared<string>(word));
	}
	priority_queue<shared_ptr<string>, vector<shared_ptr<string>>, decltype(comp)> wordss{ comp,words };
	while (!wordss.empty())
	{
		cout << *wordss.top() << " ";
		wordss.pop();
	}
	cout << endl;
	return 0;
}
