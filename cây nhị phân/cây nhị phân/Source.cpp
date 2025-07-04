#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* createNode(int data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;

}

void inorder(Node* root) {
	if (root != NULL) {
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}
int main() {
	Node* root = createNode(10);
	root->left = createNode(5);
	root->right = createNode(15);
	root->left->left = createNode(2);
	root->left->right = createNode(7);
	root->right->left = createNode(12);
	root->right->right = createNode(20);
	cout << " inorder traversal of binary tree is :";
	inorder(root);
	cout << endl;
}
