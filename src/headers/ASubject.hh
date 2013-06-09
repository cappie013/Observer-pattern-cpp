#ifndef				ASUBJECT_HH_
# define			ASUBJECT_HH_

# include			<algorithm>
# include			<vector>

# include			"AObserver.hh"
# include			"Notifier.hh"

class				AObserver;

class				ASubject
{
  typedef std::vector<AObserver *>	AObserverVector;
  typedef AObserverVector::iterator	AObserverVectorIT;

public:
  virtual ~ASubject();

  bool				addObserver(AObserver *observer);
  bool				removeObserver(AObserver *observer);
  bool				notifyObservers(void);

protected:
  ASubject(void);

private:
  ASubject(ASubject const &);
  ASubject &			operator=(ASubject const &);

  AObserverVector		collection_;
};

#endif				/* !ASUBJECT_HH_ */
