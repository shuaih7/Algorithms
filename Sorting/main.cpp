// Sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <windows.h>
#include <iostream>
#include <vector>
#include "Sorting.h"

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
	Sorting srt;
	vector<int> vec = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	vector<int> result = srt.merge_sort(vec);
	srt.print_vec(result);

	return 0;
}

