#include<iostream>

using namespace std;

int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	
	double x = ((c * e - b * f) / (a * e - b * d));
	double y = ((-c * d + a * f) / (a * e - b * d));
	
	x = (int)x;
	y = (int)y;
	
	cout << x << " " << y;
}