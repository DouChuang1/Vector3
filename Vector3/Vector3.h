#pragma once
#include <math.h>

class Vector3
{
public:
	float x, y, z;

	Vector3(){}
	Vector3(const Vector3 &v):x(v.x),y(v.y),z(v.z){}
	Vector3(float _x,float _y,float _z) :x(_x), y(_y), z(_z) {}

	void Zero() { x = y = z = 0.0f; }

	Vector3 operator -() { return Vector3(-x, -y, -z); }

};

inline float VecMag(const Vector3 &v)
{
	return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}
