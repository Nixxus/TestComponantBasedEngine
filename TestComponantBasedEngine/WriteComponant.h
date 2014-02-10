#include "BaseComponant.h"

class WriteComponant : public BaseComponant
{
public:
	WriteComponant(Object* owner) : BaseComponant(owner)
	{
		this->Type = "Write";
		this->WriteText = "WriteComponant Online";
	};

	virtual void Update()
	{
		this->Owner->Output = WriteText;
	}

private:
	std::string WriteText;
};