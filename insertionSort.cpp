#include <iostream>

int main()
{
	int myArr[] = {3, 22, 5, 6, 4, 3, 7, 8, 6, 9};
	int size = sizeof(myArr) / sizeof(myArr[0]);

	for (int i = 1; i < size; i++)
	{
		int temp = myArr[i];
		int j = i - 1;
		while (j > -1 && temp < myArr[j])
		{
			myArr[j + 1] = myArr[j];
			myArr[j] = temp;
			j--;
		}
	}

	for (auto num : myArr)
	{
		std::cout << num << ", ";
	}
	std::cout << std::endl;
	return 0;
}
