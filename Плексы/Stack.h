#pragma once

template <typename T>
class TStack
{
private:

	T* arr;
	unsigned int size;
	unsigned int last;

public:

	TStack(unsigned int n = 25)
	{
		size = n;
		last = 0;
		arr = new T[size];
	}

	TStack(const TStack& src)
	{
		size = src.size;
		last = src.last;
		arr = new T[size];

		for (int i = 0; i < size; i++)
		{
			arr[i] = src.arr[i];
		}
	}

	~TStack() { }

	TStack<T>& operator= (const TStack<T>& src)
	{
		if (size != src.size)
		{
			if (size != 0)
			{
				delete[] arr;
			}

			arr = new T[size];
			size = src.size;
		}

		last = src.last;

		for (int i = 0; i < size; i++)
		{
			arr[i] = src.arr[i];
		}

		return *this;
	}

	bool isEmpty()
	{
		return (last == 0) ? true : false;
	}

	bool isFull()
	{
		return (last == size - 1) ? true : false;
	}

	T peek()
	{
		return !isEmpty() ? arr[last - 1] : T(0);
	}


	T pop()
	{
		return !isEmpty() ? arr[--last] : T(0);
	}

	void push(T item)
	{
		if (!isFull())
		{
			arr[last++] = item;
		}
	}
};
