#include<iostream>
using namespace std;
class Student {
private:
	char number[11];
	double grade;
public:
	void setValue(char* n, double g) {
		strcpy_s(number, sizeof(number), n);
		grade = g;
	}
	double getGrade() {
		return grade;
	}
	char* getNumber() {
		return number;
	}
};
void maxx(Student* stud) {
	int num, max=0;
	for (int i = 0; i < 5; i++) {
		if ((stud + i)->getGrade() > max) {
			max = (stud + i)->getGrade();
			num = i;
		}
	}
	cout << (stud + num)->getNumber();
}
int main() {
	char n[11];
	double g;
	Student stud[5];
	for (int i = 0; i < 5; i++) {
		cout << "请输入学号与成绩：";
		cin >> n >> g;
		stud[i].setValue(n, g);
	}
	maxx(stud);
}