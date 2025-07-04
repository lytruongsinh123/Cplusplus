#include<iostream>
using namespace std;

struct Node {
	int  data;
	Node* next;
};
typedef struct Node* node;

bool empty(node top) {
	return (top == NULL);
}

int getsize(node top) {
	int size = 0;
	while (top != NULL) {
		size++;
		top = top->next;
	}
	return size;
}

node makenode(int x) {
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}
void push(node& top, int x) {
	node tmp = makenode(x);
	if (top == NULL) {
		top = tmp;
	}
	else {
		tmp->next = top;
		top = tmp;
	}
}

void pop(node& top) { 
	if (top == NULL) {
		return;
	}
	else {
		top = top->next;
	}
}

int gettop(node top) {
	return top->data;
}

int main() {
	node top = NULL;
	long long n;
	cin >> n;
	while (n != 0) {
		int r = n % 2;
		push(top, r);
		n /= 2;
	}
	while (!empty(top)) {
		cout << gettop(top);
		pop(top);
	}
}