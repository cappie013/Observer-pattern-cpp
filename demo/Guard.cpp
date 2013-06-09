#include			"Guard.hh"

// CTOR - DTOR

Guard::Guard(void) {}

Guard::~Guard() {}

// PUBLIC METHODS

void				Guard::notify(ASubject *subject)
{
  std::cout << "MOVEMENT ON JEWEL" << std::endl;
  (void)(subject);
}

