#include "pch.h"
#include <iostream>
#include <vector>
#include "Sorting.h"

using namespace std;

Sorting::Sorting()
{
}

Sorting::~Sorting()
{
}

vector<int> Sorting::bubble(vector<int>& input)
{
	int length = input.size();

	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (input[j + 1] < input[j]) {
				int temp = input[j + 1];
				input[j + 1] = input[j];
				input[j] = temp;
			}
		}
	}

	return input;
}

vector<int> Sorting::merge(vector<int>& input)
{
	vector<int> result;


	return result;
}

void Sorting::print_vec(vector<int>& input)
{
	cout << "The result is:" << endl;

	for (vector<int>::iterator iter = input.begin(); iter != input.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;
}