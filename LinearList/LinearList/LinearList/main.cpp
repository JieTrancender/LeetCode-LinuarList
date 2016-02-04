// LinearList.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "RemoveDuplicatesFromSortedArray.hpp"
#include "RemoveDuplicatesFromSortedArrayII.hpp"
#include "SearchInRotatedSortedArray.hpp"
#include <iostream>

using namespace std;

int main()
{
	RemoveDuplicateFromSortedArray *test = new RemoveDuplicateFromSortedArray;
	int arr[] = { 1,1,2, 4, 4, 5, 6, 6 };
	
	//��Ϊ������ı�ԭ���飬���Բ���ͬʱ���ã���������һ��
	//cout << test->removeDuplicatesSecond(arr, sizeof(arr) / sizeof(arr[0])) << endl;
	//cout << test->removeDuplicatesFirst(arr, sizeof(arr) / sizeof(arr[0])) << endl;

	RemoveDuplicateFromSortedArrayII *test_second = new RemoveDuplicateFromSortedArrayII;
	int arr_second[] = { 1, 1, 1, 2, 3, 4, 4, 5, 6, 6, 6 };
	cout << test_second->removeDuplicates(arr_second, sizeof(arr_second) / sizeof(arr_second[0])) << endl;

	SearchRotatedSortedArray *test_third = new SearchRotatedSortedArray;
	int arr_third[] = { 4, 5, 6, 7, 0, 1, 2 };
	cout << test_third->search(arr_second, sizeof(test_third) / sizeof(test_third[0]), 6) << endl;
    return 0;
}

