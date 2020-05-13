#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<memory>
using namespace std;
int main()
{
#if 0
	//普通指针
	vector<string*> words;
	string word;
	while (true)
	{
		if ((cin >> word).eof())
		{
			cin.clear();
			break;
		}
		words.push_back(new string{ word });
	}
	for (auto iter = begin(words); iter != end(words); iter++)
		cout << **iter << " ";
	cout << endl;
	for (auto iter = begin(words); iter != end(words); )
	{
		if (**iter == "one")
		{
			delete *iter;
			iter = words.erase(iter);
		}
		else
			iter++;
	}
	for (auto iter = begin(words); iter != end(words); iter++)
		delete *iter;
#endif

	//智能指针
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
	return 0;
}
