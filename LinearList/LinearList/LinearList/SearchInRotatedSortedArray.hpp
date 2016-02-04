#include <iostream>

using namespace std;

//Suppose a sorted array is rotated at some pivot unknown to you beforehand.
//(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
//You are given a target value to search.If found in the array return its index, otherwise return -1.
//You may assume no duplicate exists in the array.

class SearchRotatedSortedArray
{
public:
	int search(int arr[], int n, int target)
	{
		int first = 0, last = n;
		while (first != last)
		{
			const int mid = first + (last - first) / 2;
			if (arr[mid] == target)
				return mid;
			if (arr[first] <= arr[mid])
			{
				if (arr[first] <= target && target < arr[mid])
					last = mid;
				else
					first = mid + 1;
			}
			else
			{
				if (arr[mid] < target && target <= arr[last - 1])
					first = mid + 1;
				else
					last = mid;
			}
		}
		return -1;
	}
};