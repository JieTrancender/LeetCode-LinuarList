#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

//Given a sorted array, remove the duplicates in place such that each element appear only once
//and return the new length.
//Do not allocate extra space for another array, you must do this in place with constant memory.
//For example, Given input array A = [1, 1, 2],
//Your function should return length = 2, and A is now[1, 2].

class RemoveDuplicateFromSortedArray
{
public://int arr[] = { 1,1,2, 4, 4, 5, 6, 6 };
	int removeDuplicatesFirst(int arr[], int n)
	{
		if (0 == n)
			return 0;
		int index = 0;
		for (int i = 1; i < n; ++i)
		{
			if (arr[i] == arr[i - 1])
			{
				++index;
			}
			else
			{
				arr[i - index] = arr[i];
			}
		}
		return n - index;
	}

	int removeDuplicatesSecond(int arr[], int n)
	{
		return distance(arr, unique(arr, arr + n));
	}
};