
#include<cstdlib>

#include <Windows.h>
#include<iomanip>

#include"Test.hpp"



struct MyStruct
{

};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	TestClass one;
	one.PrintLol();
	one.ChangeName("Bruh");
	one.PrintLol();

	return 0;
}


