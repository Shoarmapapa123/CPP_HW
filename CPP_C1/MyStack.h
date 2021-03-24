#pragma once
#ifndef _MYSTACK_H_
#define _MYSTACK_H_
struct Block {
	int number;
	Block* next;
};
class MyStack {
private:
	Block* top;
public:
	MyStack();
	~MyStack();
	
	bool is_empty();
	void push(int x);
	int pop();
	void print();
	int size();
	int sum();
};
#endif