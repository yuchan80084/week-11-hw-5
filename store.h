#include"fruit.h"
class store
{
public:
	//constructor
	store()
	{}
	store(int a, int b, int c,int d, float e, float f,float g,float h)
	{
		apple = fruit(a, e);
		pear = fruit(b, f);
		peach = fruit(c, g);
		mango = fruit(d, h);
	}
	//member data
	fruit apple, pear, peach,mango;
	float total();
	float total(float);
};