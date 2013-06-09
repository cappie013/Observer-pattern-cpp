#ifndef				DOOR_HH_
# define			DOOR_HH_

# include			<iostream>

# include			"AObserver.hh"

class				Door : public AObserver
{
public:
  Door(void);
  virtual ~Door();

  virtual void			notify(ASubject *subject);

private:
  Door(Door const &);
  Door				&operator=(Door const &);
};

#endif				/* !DOOR_HH_ */
