#include"fruit.h"
float fruit::show()
{
	return price * many;
}
void fruit::operator*(float r)
{
	price *= (r + 100) / 100.0;
}