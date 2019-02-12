#include <iostream>

template <typename T>
T add(T const & x, T const & y)
{

	return x * y;

}

int main()
{
	int a = 5;
	int b = 10;
	std::cout << a + b << std::endl;
	return 0;
}