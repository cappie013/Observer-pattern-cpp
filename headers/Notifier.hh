#ifndef				NOTIFIER_HH_
# define			NOTIFIER_HH_

# include			"ASubject.hh"
# include			"AObserver.hh"

class				ASubject;
class				AObserver;

class Notifier
{
public:
  Notifier(ASubject *subject);
  ~Notifier();
  void				operator()(AObserver *observer);

private:
  ASubject			*subject_;
};

#endif				/* !NOTIFIER_HH_ */
