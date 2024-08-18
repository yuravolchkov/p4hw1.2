#include "Function.h"

int super_func(int* func_array, const int& func_size, int& func_input)
{
	int left = 0, right = func_size - 1;
	for (; left < right;)
	{
		if (func_array[(left + right) / 2] > func_input)
		{
			right = (left + right) / 2;
		}
		else if (func_array[(left + right) / 2] <= func_input)
		{
			left = ((left + right) / 2) + 1;
		}
	}
	return right;
}