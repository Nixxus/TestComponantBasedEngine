#include "BaseComponant.h"
#include <iostream>

class ReadComponant : public BaseComponant
{
public:
	ReadComponant(Object* owner) : BaseComponant(owner)
	{
		this->Type = "Read";
	};

	virtual void Update()
	{
		std::cout << this->Owner->Output << std::endl;
	}

private:
	
};