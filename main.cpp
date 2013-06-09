#include			<vector>
#include			<iostream>

#include			"ASubject.hh"
#include			"AObserver.hh"
#include			"Door.hh"
#include			"Jewel.hh"
#include			"Guard.hh"

int				main(void)
{
  Guard				g1, g2;
  Door				d;
  Jewel				j;

  j.addObserver(&g1);
  j.addObserver(&g2);
  j.addObserver(&d);

  j.notifyObservers();
  return (0);
}
