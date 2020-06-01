// Vector3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "Vector3.h"
using namespace std;

void print_v(Vector3 &v)
{
	cout << "[" << v.x <<","<< v.y <<","<< v.z <<"]"<< endl;
}

int main()
{
    std::cout << "Hello Vector!\n"; 

	Vector3 v1(1, 2, 3);

	Vector3 v2(v1);

	Vector3 v3 = -v2;

	print_v(v1);
	print_v(v2);
	print_v(v3);

	std::cout << VecMag(v3) << endl;

	system("pause");
	return 0;
}

