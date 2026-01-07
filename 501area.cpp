#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void SetTime(int h, int m, int s) {
		hour = (h >= 0 && h < 24) ? h : 0;
		minute = (m >= 0 && m < 60) ? m : 0;
		sec = (s >= 0 && s < 60) ? s : 0;
	}
	void ShowTime() {
		if (hour < 10) cout << '0' << hour << ':';
		else cout << hour << ':';
		if (minute < 10) cout << '0' << minute << ':';
		else cout << minute << ':';
		if (sec < 10) cout << '0' << sec;
		else cout << sec;
	}
};
int main() {
	Time t1;
	cout << "ÇëÉèÖÃÊ±¼ä£º";
	int h, m, s;
	cin >> h >> m >> s;
	t1.SetTime(h,m,s);
	t1.ShowTime();
}