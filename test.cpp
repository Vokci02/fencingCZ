#include "referee.hpp"

int main ()
{
  CReferee r1 ( "Fanda", "Vokac", "TJLKV", "CZE", 1 );
  CReferee r2 ( "Pavel", "Kral", "TJLKV", "CZE", 2 );
  r1.addPoolRefered ( 6 );
  r1.addPoolRefered ( 6 );
  r2.addPoolRefered ( 7 );
  r2.addPoolRefered ( 8 );
  for (int i = 0; i < 5; i++)
    r1.addDEMatchRefered ();
  for (int i = 0; i < 3; i++)
    r2.addFinalMatchRefered ();
  r1.print ();
  r2.print ();
  return 0;

}