#ifndef				GUARD_HH_
# define			GUARD_HH_

#include			<iostream>

# include			"AObserver.hh"

class				Guard : public AObserver
{
public:
  Guard(void);
  virtual ~Guard();

  virtual void			notify(ASubject *subject);

protected:

private:
  Guard 			&operator=(const Guard &other);
  Guard(const Guard &other);
};

#endif				/* !GUARD_HH_ */
