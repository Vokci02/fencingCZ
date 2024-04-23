#ifndef POOLMATCH_HPP
#define POOLMATCH_HPP
#include "match.hpp"

class CPoolMatch : public CMatch
{
  public:
    CPoolMatch                    ()                                                              ;
    
    virtual int   assignFencers   ( const CFencer &fencer1, const CFencer &fencer2          )     ;
    virtual int   checkScoreIn    ( int leftScore         , int rightScore                  )     ;
    virtual int   finishMatch     ( int leftScore         , int rightScore                  )     ;
    virtual int   repairScore     ( int leftScore         , int rightScore                  )     ;
    
    void print                    ()                                                         const;
  
  private:

};

#endif