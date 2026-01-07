#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << '(' << x << ',' << y << ')' << endl;
	}
};
int main() {
	Point point(60, 80);
	point.display();
	int i, j;
	cout << "ÇëÊäÈëÐÞ¸ÄÖµ£º";
	cin >> i >> j;
	point.setPoint(i, j);
	point.display();
	return 0;
}