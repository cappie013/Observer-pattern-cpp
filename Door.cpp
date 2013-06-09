#include			"Door.hh"

// CTOR - DTOR

Door::Door(void) {}

Door::~Door() {}

// PUBLIC METHODS

void				Door::notify(ASubject *subject)
{
  std::cout << "MOVEMENT ON JEWEL" << std::endl;
  (void)(subject);
}
