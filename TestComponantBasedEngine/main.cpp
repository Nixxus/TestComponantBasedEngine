//Entry point
#include "Object.h"

void main()
{
	Object object;

	BaseComponant* componant = new BaseComponant(&object);
	object.AddComponant(componant);

	componant = new BaseComponant(&object);
	object.AddComponant(componant);

	object.Update();

	std::cin.get();

}