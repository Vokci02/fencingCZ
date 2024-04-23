#ifndef MATCH_HPP
#define MATCH_HPP
#include <utility>
#include "fencer.hpp"

class CMatch
{
  public:
    CMatch ();
    virtual int            assignFencers ( const CFencer &fencer1, const CFencer &fencer2 ) = 0        ;
    virtual int            finishMatch   ( int leftScore, int rightScore )                  = 0        ;
    virtual void           repairScore   ( int leftScore, int rightScore )                  = 0        ;
    virtual int            checkScoreIn  ( int leftScore, int rightScore )                  = 0        ;
    std::pair <int, int>   getScore      ()                                                       const;
    CFencer                getWinner     ()                                                       const;
    void                   setWinner     ( const CFencer &winner );
    void                   print         ()                                                       const;

    bool                   finished;
  protected:
    CFencer                m_leftFencer;
    CFencer                m_rightFencer;
    int                    m_leftScore;
    int                    m_rightScore;
    CFencer                m_winner;
};

#endif