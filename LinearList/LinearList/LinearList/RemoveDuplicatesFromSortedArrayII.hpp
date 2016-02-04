#include <iostream>

using namespace std;

//Follow up for ”Remove Duplicates” : What if duplicates are allowed at most twice ?
//For example, Given sorted array A = [1, 1, 1, 2, 2, 3],
//Your function should return length = 5, and A is now[1, 1, 2, 2, 3]

class RemoveDuplicateFromSortedArrayII
{
public://int arr_second[] = { 1, 1, 1, 2, 3, 4, 4, 5, 6, 6, 6 };
	int removeDuplicates(int arr[], int n)
	{
		if (n <= 2)
			return n;
		int index = 0;
		for (int i = 2; i < n; ++i)
		{
			//防止因为向前复制导致的BUG
			if (arr[i] == arr[i - 2 - index] && arr[i] == arr[i - 1 - index])
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
};