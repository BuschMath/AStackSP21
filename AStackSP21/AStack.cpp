#include "AStack.h"

AStack::AStack()
{
	top = -1;
}

AStack::~AStack()
{
}

bool AStack::IsEmpty()
{
	if (top > -1)
		return false;
	else
		return true;
}

bool AStack::IsFull()
{
	if (MAX_ITEMS - 1 == top)
		return true;
	else
		return false;
}

void AStack::Push(ItemType item)
{
	//try
	//{
		if (!IsFull())
		{
			top++;
			items[top] = item;
		}
	//}
	//catch (FullStack exceptionObject)
	//{
	//	cerr << "FullStack exceoption thrown" << endl;
	//}
	//catch (EmptyStack exceptionObject)
	//{
	//	cerr << "EmptyStack exception thrown" << endl;
	//}
	
}

ItemType AStack::Pop()
{
	if (!IsEmpty())
		return items[top--];
	else
	{
		ItemType* temp = new ItemType;
		return *temp;
	}
}

ItemType AStack::Top()
{
	if (!IsEmpty())
		return items[top];
	else
	{
		ItemType* temp = new ItemType;
		return *temp;
	}
}
