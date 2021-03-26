#include "MyBST.h"
#include <cstdlib>
#include <string>
#include <iostream>

MyBST::MyBST()
{
	root = NULL;
}

MyBST::~MyBST()
{
	delete root;
}

void MyBST::insert(int x)
{
	Node* n = new Node{x,NULL,NULL};
	if (root == NULL) {
		root = n;
	}
	else if(!is_present(x)){
		Node* current = root;
		bool added = false;
		while (!added) {
			if (x < current->info) {
				if (current->left == NULL) {
					current->left = n;
					added = true;
				}
				else {
					current = current->left;
				}
			}
			else {
				if (current->right == NULL) {
					current->right = n;
					added = true;
				}
				else {
					current = current->right;
				}
			}
		}
		
		current=NULL;
	}
}

int MyBST::depth()
{
	return 0;
}

bool MyBST::is_present(int x)
{
	return false;
}

void MyBST::traverse()
{
	std::cout << internalTraverse(root);
}

std::string MyBST::internalTraverse(Node* n) {
	if (n == NULL) {
		return "";
	}
	else {
		return internalTraverse(n->left) + std::to_string(n->info)+ " " + internalTraverse(n->right);
	}
}

void MyBST::print()
{
}
	