#include <iostream>

void swap(int *a, int *b)
{
	std::cout << "swap(int a, int b) Called " << std::endl;
}

void swap(char *a, char *b)
{
	std::cout << "swap(char a, char b) Called " << std::endl;
}

void swap(double *a, double *b)
{
	std::cout << "swap(double a, double b) Called " << std::endl;
}

int main(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;

	return 0;
}