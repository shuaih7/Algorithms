#ifndef _SORTING_H_
#define _SORTING_H_

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Sorting
{
public:
	Sorting();
	~Sorting();
	vector<int> bubble_sort(vector<int>&);
	vector<int> merge_sort(const vector<int>&);

	void print_vec(vector<int>&);

private:
	vector<int> merge(const vector<int>&, const vector<int>&);
};



#endif
