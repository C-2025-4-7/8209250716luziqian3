#include<iostream>
using namespace std;
class Cube {
private:
	double length;
	double height;
	double width;
public:
	Cube(double l, double w, double h) {
		length = l;		
		height = h;
		width = w;
	}
	double countV() {
		double V;
		V = height * width * length;
		return V;
	}
};
int main() {
	double l, w, h;
	for (int i = 0; i < 3; i++) {
		cout << "ÇëÊäÈë³¤¿í¸ß£º";
		cin >> l >> w >> h;
		Cube c1(l, w, h);
		cout << c1.countV() << endl;
	}
	return 0;
}