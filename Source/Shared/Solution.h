#pragma once
#include <vector>
using namespace std;

class Solution
{
public:
	Solution();
	~Solution(void);

	vector<float> xbeam; //x-positions of the beam
	vector<vector<vector<int> path; //sequence of holes that a turret k visits, ordered per interval[turret k][interval h][holes]
}