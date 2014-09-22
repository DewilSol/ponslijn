#pragma once
#include <vector>
using namespace std;

class Instance
{
public:
	Instance();
	~Instance(void);

	int instancenr; 
	
	int N; //number of holes
	int K; //number of turrets
	
	vector<float> vx; //speed in x-direction of turrets
	vector<float> vy; //speed in x-direction of turrets

	vector<bool> canmovex; //true if turret can move in x direction
	vector<float> Xmin; //minimum x-position of turret k
	vector<float> Xmax; //maximum x-position of turret k
	vector<vector<int>>; //set of punches available on turret k
	vector<vector<float>>; //relative x-position of punch l on turret k
	vector<vector<float>>; //relative y-position of punch l on turret k


	vector<float> xhole; //x position of hole i
	vector<float> yhole; //y position of hole i
	vector<int> reqturret; //type of punch required to punch hole
};

