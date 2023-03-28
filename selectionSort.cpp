#include <iostream>

int main()
{
	int myArr[] = {3, 22, 5, 6, 4, 3, 7, 8, 6, 9};
	int size = sizeof(myArr) / sizeof(myArr[0]);

	for (int i = 0; i < size; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (myArr[j] < myArr[minIndex])
			{
				minIndex = j;
			}
		}
		if (i != minIndex)
		{
			int temp = myArr[i];
			myArr[i] = myArr[minIndex];
			myArr[minIndex] = temp;
		}
	}

	for (auto num : myArr)
	{
		std::cout << num << ", ";
	}
	std::cout << std::endl;
	return 0;
}
