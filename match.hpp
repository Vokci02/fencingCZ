#ifndef MATCH_HPP
#define MATCH_HPP
#include <utility>
#include "fencer.hpp"

class CMatch
{
  public:
    CMatch ();
    void assignFencers (const CFencer &fencer1, const CFencer &fencer2);
    virtual int setScore (int leftScore, int rightScore);
    std::pair <int, int> getScore () const;
    CFencer getWinner () const;
    void setWinner (const CFencer &winner);
    
    bool finished;
  protected:
    CFencer m_leftFencer;
    CFencer m_rightFencer;
    int m_leftScore;
    int m_rightScore;
    CFencer m_winner;
};

#endif