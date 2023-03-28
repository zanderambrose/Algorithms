#include <iostream>

int main()
{
	int myArr[] = {3, 22, 5, 6, 4, 3, 7, 8, 6, 9};
	int size = sizeof(myArr) / sizeof(myArr[0]);

	for (auto num : myArr)
	{
		std::cout << num << ", ";
	}
	std::cout << std::endl;
	return 0;
}
