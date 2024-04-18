#include "referee.hpp"
#include "fencer.hpp"

int main ()
{
  CReferee r1 ( "Fanda", "Vokac", "TJ Lokomotiva Karlovy Vary", "TJLKV", "CZE", 1 );
  CReferee r2 ( "Pavel", "Kral", "TJ Lokomotiva Karlovy Vary", "TJLKV", "CZE", 2 );
  r1.addPoolRefered ( 6 );
  r1.addPoolRefered ( 6 );
  r2.addPoolRefered ( 7 );
  r2.addPoolRefered ( 8 );
  for ( int i = 0; i < 5; i++ )
    r1.addDEMatchRefered ();
  for ( int i = 0; i < 3; i++ )
    r2.addFinalMatchRefered ();
  r1.print ();
  r2.print ();
  
  CFencer f1 ( "Petr", "Novak", "TJ Lokomotiva Karlovy Vary", "TJLKV", "CZE", "epee", true, 2000, 1, 1 );
  CFencer f2 ( "Jiri", "Svoboda", "TJ Lokomotiva Karlovy Vary", "TJLKV", "CZE", "foil", false, 1999, 2, 2 );
  f1.setWonPoolMatches ( 5 );
  f1.setLostPoolMatches ( 1 );
  f2.setWonPoolMatches ( 3 );
  f2.setLostPoolMatches ( 3 );
  f1.setScoredPoolTouches ( 30 );
  f1.setReceivedPoolTouches ( 20 );
  f2.setScoredPoolTouches ( 25 );
  f2.setReceivedPoolTouches ( 25 );
  f1.calculatePoolMatchesRatio ();
  f2.calculatePoolMatchesRatio ();
  f1.calculatePoolTouchesIndex ();
  f2.calculatePoolTouchesIndex ();
  f1.print ();
  f2.print ();

  std::cout << "Name: " << f1.getName () << std::endl;

  return 0;

}