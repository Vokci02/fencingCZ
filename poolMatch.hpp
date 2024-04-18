#ifndef POOLMATCH_HPP
#define POOLMATCH_HPP
#include "match.hpp"

class CPoolMatch : public CMatch
{
  public:
    CPoolMatch      ()                               ;
    int finishMatch ( int leftScore, int rightScore );

  private:

};

#endif