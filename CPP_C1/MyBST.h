#pragma once
#ifndef _MYBST_H_
#define _MYBST_H_
#include <cstdlib>
#include <string>
#include <iostream>
template <typename T>
struct Node {
	T info;
	Node* left;
	Node* right;
};

template <typename T>
class MyBST {
private:
	Node<T>* root;
	std::string internalTraverse(Node<T>* n) {
		if (n == NULL) {
			return "";
		}
		else {
			return internalTraverse(n->left) + std::to_string(n->info) + " " + internalTraverse(n->right);
		}
	}
public:
	MyBST() {
		root = NULL;
	}
	~MyBST() {
		InternalDelete(root);
	}
	void InternalDelete(Node<T>* n) {
		if (n != NULL) {
			InternalDelete(n->left);
			InternalDelete(n->right);
			delete n;
		}
	}

	void insert(T x) {
		Node<T>* n = new Node<T>{ x,NULL,NULL };
		if (root == NULL) {
			root = n;
		}
		else if (!is_present(x)) {
			Node<T>* current = root;
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

			current = NULL;
		}
	}
	int depth() {
		return InternalDepth(root);
	}
	int InternalDepth(Node<T>* node) {
		if (node == NULL) {
			return 0;
		}
		else {
			int left = InternalDepth(node->left);
			int right = InternalDepth(node->right);
			if (left >= right) {
				return left + 1;
			}
			else {
				return right + 1;
			}
		}
	}
	bool is_present(T x) {
		Node<T>* current = root;
		bool found = false;
		while (current != NULL) {
			if (x == current->info) {
				found = true;
			}
			else if (x < current->info) {
				current = current->left;
			}
			else {
				current = current->right;
			}
		}
		current = NULL;
		return found;
	}

	void traverse() {
		std::cout << internalTraverse(root);
	}
	void print() {
		//TODO print what???
	}
	void deleteElem(T elem) {
		if (is_present(elem)) {
			//TODO delete
		}
	}
};
#endif