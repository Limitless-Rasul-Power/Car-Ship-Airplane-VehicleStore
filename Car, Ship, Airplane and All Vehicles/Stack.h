#pragma once
#include <assert.h>
template<typename T>
class Stack
{
private:
	T** data;
	unsigned short length;
	unsigned short front : 1;

public:

	Stack() :data(nullptr), length(0), front(0)
	{}

	void Push(T* added)
	{
		auto new_data = new T * [Get_length()+ 1];

		for (unsigned short i = 0; i < Get_length(); i++)
			new_data[i] = this->data[i];

		new_data[Get_length()] = added;

		delete[] this->data;
		this->data = new_data;
		new_data = nullptr;
		Set_length(Get_length() + 1);
	}

	void Pop()
	{
		assert(Get_length() > 0 && "Length must be more than 0!");
		auto new_data = new T * [Get_length() - 1];

		for (unsigned short i = 0; i < Get_length() - 1; i++)
			new_data[i] = this->data[i];

		delete[] this->data;

		this->data = new_data;
		new_data = nullptr;
		Set_length(Get_length() - 1);
	}

	T*& Peek() const
	{
		assert(Get_length() > 0 && "Lenght must be more than 0!");
		return data[front];
	}

	void Set_length(const short& length)
	{
		assert(length > 0 && "Length must be more than 0!");
		this->length = length;
	}

	unsigned short Get_length() const
	{
		return length;
	}

	T*& operator [] (short index) const
	{
		assert(index > -1 && "Index must be more than -1!");
		return data[index];
	}

	void Clear()
	{
		if (this->data != nullptr)
		{
			delete[] this->data;
			this->data = nullptr;
		}
	}

	~Stack()
	{
		if (data != nullptr)
		{
			for (unsigned short i = 0; i < Get_length(); i++)
					delete data[i];

			delete[] data;
		}
	}

};