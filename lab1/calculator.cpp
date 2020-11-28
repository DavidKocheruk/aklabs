#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 3.5;
	// comment in Add
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
    // comment in Sub
}

int Calculator::Mul (double a, double b)
{
    return a * b;
    // comment in Mul
}

int Calculator::Div (double a, double b)
{
	return a / b;
	// comment in Div
}
