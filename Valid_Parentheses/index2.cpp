#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> stacks;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stacks.push(c);
        }
        else
        {
            if (stacks.empty())
                return false;
            char top = stacks.top();
            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '['))
            {
                return false;
            }
            stacks.pop();
        }
    }
    return stacks.empty();
}
int main()
{
    string s;
    cout << "Enter a string :";
    cin >> s;
    if (isValid(s))
    {
        cout << "Valid not properly" << endl;
    }
    else
    {
        cout << "Valid properly" << endl;
    }
    return 0;
}