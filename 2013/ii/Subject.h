#include "Event.h"
#include "Observer.h"

class Subject{
	private:
		set<Observer*> observers;
}