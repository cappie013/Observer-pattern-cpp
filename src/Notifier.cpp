#include			"Notifier.hh"

// CTOR - DTOR

Notifier::Notifier(ASubject *subject)
  : subject_(subject)
{}

Notifier::~Notifier() {}

void				Notifier::operator()(AObserver *observer)
{
  observer->notify(this->subject_);
}


