#include "Dyhotomia.h"

Dyhotomia::Dyhotomia(void) {}

Dyhotomia::~Dyhotomia(void) {}

void Dyhotomia::setVolumes(double vol_a, double vol_b) {
	a = vol_a;
	b = vol_b;
}

void Dyhotomia::setTolerance(double vol_eps) {
	eps = vol_eps;
}

double Dyhotomia::halfab(void) {
	return (a + b) / 2;
}

double Dyhotomia::func(double a, double b) {
	double fa = 3*sin(sqrt(a)) + 0.35*a - 3.8;
	std::cout << "f(a) = " << fa << "    a = " << a << "\n";
	double fb =  3*sin(sqrt(b)) + 0.35*b - 3.8;
	std::cout << "f(b) = " << fb << "    b = " << b << "\n";
	return fa * fb;
}

double Dyhotomia::solution(void) {
	if (func(a, b) > 0) {
		std::cout << "No roots";
		return 1;
	}
	do {
		double c = halfab();

		if (func(a, c) < 0) {
			b = c;
		}
		else {
			a = c;
		}
	} while (abs(b - a) > eps);

	std::cout << "Dyhotomia solution: x = " << halfab();
	double root = halfab();
	std::cout << "f(Dyhotomia solution) = " << 3*sin(sqrt(root)) + 0.35*root - 3.8 << "\n";
return root;

    return halfab();


}