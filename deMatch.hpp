#ifndef DEMATCH_HPP
#define DEMATCH_HPP
#include <string>
#include <vector>
#include "match.hpp"
#include "referee.hpp"

class CDEMatch : public CMatch
{
  public:
    CDEMatch ();
    int finishMatch (int leftScore, int rightScore);

  private:
    std::vector <CReferee> m_referees;
    std::vector <CReferee> m_videoReferees;    
    std::string m_time;
    int m_id;
    int m_piste;
    bool m_yellowCardLeft;
    bool m_redCardLeft;
    bool m_g3RedCardLeft;
    bool m_blackCardLeft;
    bool m_yellowCardRight;
    bool m_redCardRight;
    bool m_g3RedCardRight;
    bool m_blackCardRight;
    bool m_pYellowCard;
    bool m_pRedCard;
    bool m_pBlackCardLeft;
    bool m_pBlackCardRight;

};

#endif