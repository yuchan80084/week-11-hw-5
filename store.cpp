#include"store.h"
float store::total()
{
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	return x;
}
float store::total(float exchange)
{

	return total() / exchange;
}