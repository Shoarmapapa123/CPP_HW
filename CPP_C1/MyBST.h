#pragma once
#ifndef _MYBST_H_
#define _MYBST_H_
#include <string>
struct Node {
	int info;
	Node* left;
	Node* right;
};

class MyBST {
private:
	Node* root;
	std::string internalTraverse(Node* n);
public:
	MyBST();
	~MyBST();

	void insert(int x);
	int depth();
	bool is_present(int x);
	void traverse();
	void print();
};
#endif