#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Node {
	int data;
	Node* next;
};

typedef struct Node* node;

bool empty(node back) {
	return back == NULL;
}

int getsize(node back) {
	int cnt = 0; 
	while (back != NULL) {
		++cnt;
		back = back->next;
	}
	return cnt;
}

node makenode(int x) {
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

void push(node& back, int x) {
	node tmp = makenode(x);
	if (back = NULL) {
		back = tmp;
	}
	else {
		tmp->next = back;
		back = tmp;
	}
}

void pop(node& back) {
	node truoc = NULL;
	node sau = back;
	while (sau->next != NULL) {
		truoc = sau;
		sau = sau->next;
	}
	if (truoc == NULL) {
		back = NULL;
	}
	else {
		truoc->next = NULL;
	}
}
int getfront(node back) {
	while (back->next != NULL) {
		back = back->next;
	}
	return back->data;
 }
// 6 8 66 68 86 88 666 668 686 688
int main() {
	node back = NULL;
	push(back, 6);
	push(back, 8);
	vector<int> lp;
	while (1) {
		int top = getfront(back);
		pop(back);
		string s = to_string(top);
		if (s.size() == 9) break;
		lp.push_back(top);
		push(back, top * 10 + 6);
		push(back, top * 10 + 8);
	}
	for (int x : lp) {
		cout << x << " ";
	}
}