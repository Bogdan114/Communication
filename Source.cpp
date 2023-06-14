#include <list>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	list<string> l1;
	string temp;
	char flag = 'Y';
	cout << "Vvedite stroci" << endl;
	while (flag == 'Y')
	{
		std::getline(std::cin, temp);
		l1.push_back(temp);
		cout << "Vvedite 'Y' chtobi prodoljit" << endl;
		cin >> flag;
		cin.ignore();
	}

	for (auto it : l1)
	{
		list<string> slova;
		int begin = 0;
		int end = 0;
		for (int i = 0; it[i] != '\0'; i++)
		{
			if (it[i] == ' ')
			{
				end = i;
				temp = it.substr(begin, end - begin);
				slova.push_back(temp);
				begin = end + 1;
			}
		}
		temp = it.substr(begin, it.size() - begin);
		slova.push_back(temp);

		cout << endl << "Fraza: " << it << endl;
		int i = 1;
		for (auto it1 : slova)
		{
			cout << i << ") " << it1 << endl;
			i++;
		}
	}

}