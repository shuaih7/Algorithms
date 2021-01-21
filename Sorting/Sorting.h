#ifndef _SORTING_H_
#define _SORTING_H_

#include <iostream>
#include <vector>

using namespace std;

class Sorting
{
public:
	Sorting();
	~Sorting();
	vector<int> bubble(vector<int>&);
	vector<int> merge(vector<int>&);

	void print_vec(vector<int>&);

private:

};



#endif
