#include <Dream.h>

class SandBox : public Dream::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

Dream::Application* Dream::CreateApplication()
{
	return new SandBox();
}