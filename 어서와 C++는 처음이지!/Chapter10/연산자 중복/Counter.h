#pragma once
class Counter
{
private:
	int value;
public:
	Counter() : value(0) {};
	~Counter() {}
	int getValue() const { return value; }
	void setValue(int x) { value = x; }

	// ++i
	Counter& operator++()
	{
		++value;
		return *this;
	}

	// i++
	const Counter operator++(int i)
	{
		Counter temp = { *this };
		++value;
		return temp;
	}
};
