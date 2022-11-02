#include "Operation.h"

Operations::Operations() {
	operations["+"] = [](double a, double b)->double {return b + a; };
	operations["-"] = [](double a, double b)->double {return b - a; };
	operations["*"] = [](double a, double b)->double {return b * a; };
	operations["/"] = [](double a, double b)->double {return b / a; };
};
double Operations::operation(double const& a, std::string const& name, double const& b) {
	return operations[name](a, b);
};
