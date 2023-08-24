#include<iostream>
#include<string>
#include<vector>

using namespace std;



int main()
{

	while (1)
	{
		bool seePoint = false;
		string str;
		vector<char>vrr1;


		getline(cin, str);

		if (str[0] == '.')
		{
			break;
		}

		for (int i = 0; i < str.size() - 1; i++)
		{
			if (str[i] == '(')
			{
				vrr1.push_back(str[i]);


			}
			if (str[i] == '[')
			{
				vrr1.push_back(str[i]);

			}

			if (str[i] == ')')
			{

				if (!vrr1.empty() && vrr1.back() == '(')
				{
					vrr1.pop_back();
				}
				else
				{
					seePoint = true;
					break;
				}


			}

			if (str[i] == ']')
			{
				if (!vrr1.empty() && vrr1.back() == '[')
				{
					vrr1.pop_back();
				}
				else
				{
					seePoint = true;
					break;;
				}
			}
		}

		if (vrr1.empty() && seePoint == false)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}

	}
	return 0;
}