#include <iostream>

#define SIZE 6

using namespace std;
struct queue
{
private:

	int* arr;
	bool empty()
	{
		if (pointerBot == pointerTop)
			return 1;
		else
			return 0;
	}
public:
	int pointerTop, pointerBot;
	bool start;
	bool end;
	bool f;
	queue(int size = SIZE)
	{
		start = 0;
		f = 0;
		end = 0;
		arr = new int[size];
		pointerTop = -1; 
		pointerBot = 0;
	}
	~queue()
	{
		delete[] arr;
	}
	bool push(int x)
	{
		if (pointerTop == SIZE - 1)
		{
			pointerTop = -1;
			end = 1;
		}
		if ((pointerTop + 1 == pointerBot) && start != 0 && f != 1)
		{

			return 0;
		}
		else
		{
			arr[++pointerTop] = x;
			start = 1;
			f = 0;
		}
	}
	
	int pop()
	{

	if ((pointerBot - 1 == pointerTop) && end != 1)
		{
			f = 1;
				return 0;
		}
		else
		{
			if ((pointerBot == pointerTop) && end != 1)
			{
				f = 1;
			}
			if (pointerBot + 1 == SIZE)
			{
				int tmp = arr[pointerBot];
				pointerBot = 0;
				end = 0;
				if ((pointerBot - 1 == pointerTop))
				{
					f = 1;
				}
				return tmp;
			}
			return arr[pointerBot++];
		}
	}
	int front()
	{
		if (!empty())
		{
			if (pointerTop != -1)
				return arr[pointerTop];
			else
			{
				return arr[SIZE - 1];
			}
		}
		else
		{
			return 0;
		}
	}
	int back()
	{
		if (!empty())
		{
			if (pointerBot != -1)
			{
				return arr[pointerBot];
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
};
