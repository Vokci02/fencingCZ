#ifndef POOLMATCH_HPP
#define POOLMATCH_HPP
#include "match.hpp"

class CPoolMatch : public CMatch
{
  public:
    CPoolMatch ();
    int setScore (int leftScore, int rightScore);

  private:

};

#endif