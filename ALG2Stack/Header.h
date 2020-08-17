#pragma once 
#include <iostream> 

using namespace std;

class Stack
{
private:
	int* mas;
	int Top;
	int size;
	int is;
public:

	Stack()
	{
		is = 0;
		Top = 0;
		size = 1;
		mas = new int[size];
	}

	int top()
	{
		return Top;
	}

	int getSize()
	{
		return size;
	}

	void push(int value)
	{
		if (is == size)
		{
			size *= 2;
			int *newMas = new int[size];
			for (int i = 0; i < size / 2; i++)
			{
				newMas[i] = mas[i];
			}
			delete[]mas;
			mas = newMas;
		}
		is++;
		int *newMas = new int[is];
		for (int i = 0; i < is - 1; i++)
		{
			newMas[i] = mas[i];
		}
		newMas[is - 1] = value;
		Top = value;
		delete[]mas;
		mas = newMas;
	}

	void pop()
	{
		if (!isEmpty())
		{
			is--;
			int *newMas = new int[is];
			for (int i = 0; i < is; i++)
			{
				newMas[i] = mas[i];
			}
			Top = newMas[is - 1];
			delete[]mas;
			mas = newMas;
		}

	}
	void print()
	{
		for (int i = 0; i < is; i++)
		{
			cout << mas[i] << ' ';
		}
		cout << endl;
	}

	bool isEmpty()
	{
		return is == 0;
	}

	~Stack()
	{
		delete[] mas;
	}
};