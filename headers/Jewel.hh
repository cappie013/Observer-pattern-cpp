#ifndef				JEWEL_HH_
# define			JEWEL_HH_

# include			"ASubject.hh"

class				Jewel : public ASubject
{
public:
  Jewel(void);
  virtual ~Jewel();

private:
  Jewel(Jewel const &);
  Jewel &			operator=(Jewel const &);
};

#endif				/* !JEWEL_HH_ */
