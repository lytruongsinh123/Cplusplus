#include<iostream>
using namespace std;
bool CheckSubString(string main, string sub) {
	
	int j = 0;
	bool check = false;
	if (sub.length() > main.length()) 
	{
		return false;
	}
	for (int i = 0; i < sub.length(); i++) 
	{
		check = false;
		for (int k = j; k < main.length(); k++) 
		{
			if (sub[i] == main[k]) 
			{
				check = true;
				j = k + 1;
				break;
				}
			}
		if (!check) {
			return false;
		}
	}
	
	return check;
}
int main() {
	string main; cin >> main;
	string sub; cin >> sub;
	if (CheckSubString(main, sub)) 
	{
		cout << "là chuỗi con" << endl;
	}
	else 
	{
		cout << "không là chuỗi con" << endl;
	}
}