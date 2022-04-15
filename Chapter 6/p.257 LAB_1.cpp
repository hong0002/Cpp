#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	string title;
	int price;
public:
	Book(string _t="어서와 C++", int _p=30000) : title(_t), price(_p) {}
	void print()
	{
		cout << "제목: " << title << "     " << "가격: " << price << endl;
	}
	void setTitle(string _t)
	{
		title = _t;
	}
	void setPrice(int _p)
	{
		price = _p;
	}
};

int main()
{
	Book books[10];
	string title;
	int price;

	for (int i = 0; i < 10; i++)
	{
		cout << "소장하고 있는 책 제목을 입력하세요: ";
		cin.ignore();
		getline(cin, title);
		books[i].setTitle(title);
		cout << "소장하고 있는 책 가격을 입력하세요: ";
		cin >> price;
		books[i].setPrice(price);
	}

	cout << endl << "소장하고 있는 책 정보" << endl;
	for (Book& i : books)
	{
		i.print();
	}

	return 0;
}
