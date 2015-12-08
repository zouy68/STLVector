#include <iostream>
#include "myVector.h"
#include <string>

using namespace std;

void main()
{
	int i = 3;
	myVector<int> vec(i);

	string str = "abc";
	myVector<string> vec2(str);

	vec.show();
	vec2.show();
	system("pause");
}