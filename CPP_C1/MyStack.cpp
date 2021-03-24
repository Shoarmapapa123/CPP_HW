#include "MyStack.h"
#include <iostream>

MyStack::MyStack()
{
	top = NULL;
}

MyStack::~MyStack()
{
	while (top != NULL) {
		Block* old = top;
		top = top->next;
		delete old;
	}
	delete top;
}

bool MyStack::is_empty()
{
	return (top == NULL);
}

void MyStack::push(int x)
{
	Block *b = new Block{x,top};
	top = b;
}

int MyStack::pop()
{
	if (!is_empty()) {
		int x = top->number;
		top = top->next;
		return x;
	}
	else {
		return -1;
	}
}

void MyStack::print()
{
	Block* current = top;
	while (current != NULL) {
		std::cout << current->number << " ";
		current = current->next;
	}
	std::cout << std::endl;
	delete current;
}

int MyStack::size()
{
	int size = 0;
	Block* current = top;
	while (current != NULL) {
		size++;
		current = current->next;
	}
	delete current;
	return size;
}

int MyStack::sum()
{
	int sum = 0;
	Block* current = top;
	while (current!=NULL) {
		sum += current->number;
		current = current->next;
	}
	delete current;
	return sum;
}
