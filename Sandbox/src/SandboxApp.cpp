#include <Trout.h>

class Sandbox : public Trout::Application {
public:
	Sandbox(){}
	~Sandbox(){}
};

Trout::Application* Trout::CreateApplication() {
	return new Sandbox;
}