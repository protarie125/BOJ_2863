#include <iostream>

using namespace std;

double calc(double a, double b, double c, double d) {
	return a / c + b / d;
}

void rot(double& a, double& b, double& c, double& d) {
	auto tmp = a;
	a = c;
	c = d;
	d = b;
	b = tmp;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double a, b, c, d;
	cin >> a >> b >> c >> d;

	auto ct = int{ 0 };
	auto mx = double{ 0 };
	for (int i = 0; i < 4; ++i) {
		auto v = calc(a, b, c, d);
		if (mx < v) {
			mx = v;
			ct = i;
		}

		rot(a, b, c, d);
	}

	cout << ct;

	return 0;
}