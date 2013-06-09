#ifndef				AOBSERVER_HH_
# define			AOBSERVER_HH_

# include			"ASubject.hh"

class				ASubject;

class				AObserver
{
public:
  virtual ~AObserver();

  virtual void			notify(ASubject *subject) = 0;

protected:
  AObserver(void);

private:
  AObserver(AObserver const &);

  AObserver &			operator=(AObserver const &);
};

#endif				/* !AOBSERVER_HH_ */
