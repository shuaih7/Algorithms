#include "pch.h"
#include <iostream>
#include <vector>
#include <windows.h>
#include "Sorting.h"

using std::cout;
using std::endl;
using std::vector;

Sorting::Sorting()
{
}

Sorting::~Sorting()
{
}

vector<int> Sorting::bubble_sort(vector<int>& input)
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

vector<int> Sorting::merge_sort(const vector<int>& input)
{
	if (input.size() <= 1)
		return input;
	
	int index = input.size() / 2;
	vector<int>::const_iterator f = input.begin();
	vector<int>::const_iterator s = input.begin() + index;
	vector<int> v1(f,s);
	vector<int> v2(s,input.end());

	vector<int> result = this->merge(this->merge_sort(v1), this->merge_sort(v2));

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

vector<int> Sorting::merge(const vector<int>& v1, const vector<int>& v2)
{
	vector<int> result;

	int index1 = 0, index2 = 0;

	for (int i = 0; i < v1.size() + v2.size(); i++) {
		if (v1[index1] <= v2[index2]) {
			result.push_back(v1[index1]);
			index1 += 1;

			if (index1 == v1.size()) {
				if (index2 < v2.size()){
					for (int id = index2; id < v2.size(); id++)
						result.push_back(v2[id]);
				}
				break;
			}
		}
		else {
			result.push_back(v2[index2]);
			index2 += 1;

			if (index2 == v2.size()) {
				if (index1 < v1.size()){
					for (int id = index1; id < v1.size(); id++)
						result.push_back(v1[id]);
				}
				break;
			}
		}
	}

	return result;
}