#include			"ASubject.hh"

// CTOR - DTOR

ASubject::ASubject(void) {}

ASubject::~ASubject() {}

// PUBLIC METHODS

bool				ASubject::addObserver(AObserver *observer)
{
  AObserverVectorIT		tmp = find(this->collection_.begin(), this->collection_.end(), observer);

  if (tmp != this->collection_.end())
    return false;
  this->collection_.push_back(observer);
  return true;
}

bool				ASubject::removeObserver(AObserver *observer)
{
  AObserverVectorIT		tmp = find(this->collection_.begin(), this->collection_.end(), observer);

  if (tmp == this->collection_.end())
    return false;
  this->collection_.erase(remove(this->collection_.begin(), this->collection_.end(), observer));
  return true;

}

bool				ASubject::notifyObservers(void)
{
  for_each(this->collection_.begin(), this->collection_.end(), Notifier(this));
  return (this->collection_.size());
}
