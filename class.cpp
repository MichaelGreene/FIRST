// A program to practice writing and using basic classes.

#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
	private:
		int width;
		int height;
		string* color;
	public:
		Rectangle();
		Rectangle(int w, int h, string* c);
		void set(int w, int h, string* c);
		void change_color(string* c);
		string* what_color();
		int area() const;
		void display();
};

Rectangle::Rectangle(){};
Rectangle::Rectangle(int w, int h, string* c)
{
	width = w;
	height = h;
	color = c;
}

void Rectangle::set(int w, int h, string* c)
{
	width = w;
	height = h;
	color = c;
}

void Rectangle::change_color(string* c)
{
	color = c;
}

string* Rectangle::what_color()
{
	return color;
}

int Rectangle::area() const
{
	return width * height;
}

void Rectangle::display()
{
	int width_count = width;
	int height_count = height;

	// print top of rectangle
	while (width_count > 0 )
	{
		cout << "-";
		width_count--;
	}
	// reset width_count
	width_count = width;

	// print sides of rectangle
	cout << endl;
	while (height_count > 0)
	{
		cout << "|";
		while (width_count > 2)
		{
			cout << " ";
			width_count--;
		}
		cout << "|" << endl;
		height_count--;
		width_count = width;
	}
	// reset height count
	height_count = height;

	// print bottom of rectangle
	while (width_count > 0)
	{
		cout << "-";
		width_count--;
	}
	cout << endl;
}

int main()
{
	Rectangle r1;
	string* deux_color;
	int user_width;
	int user_height;
	string user_color;

	cout << "Enter a width: ";
	cin >> user_width;

	cout << "Enter a height: ";
	cin >> user_height;

	cout << "Enter a color: ";
	cin >> user_color;
	deux_color = &user_color;

	cout << endl;
	r1.set(user_width, user_height, deux_color);
	cout << "r1's color: " << *r1.what_color() << endl;
	r1.change_color(deux_color);
	cout << "r1's area: " << r1.area() << endl;
	r1.display();

	return 0;
}
