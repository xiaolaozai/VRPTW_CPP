#pragma once
class Point;

class VehicleState
{
public:
	Point* p;
	int current_cargo = 1000;
	double current_time = 0;
	double current_distance = 0;
	bool True = true;



	explicit VehicleState(Point* p)
		: p(p)
	{
	}



	VehicleState();
	~VehicleState();
};

