#ifndef ASTACK_H
#define ASTACK_H

#include "ItemType.h"

class AStack
{
public:
	AStack();
	~AStack();

	bool IsEmpty();
	bool IsFull();
	void Push(ItemType item);
	ItemType Pop();
	ItemType Top();

private:
	ItemType items[MAX_ITEMS];
	int top;
};

#endif // !ASTACK_H
