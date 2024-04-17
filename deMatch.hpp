#include <string>
#include <vector>
#include "match.hpp"
#include "referee.hpp"

class CDEMatch : public CMatch
{
  public:
    CDEMatch ();
    int setScore (int leftScore, int rightScore);

  private:
    std::vector <CReferee> m_referees;
    std::vector <CReferee> m_videoReferees;    
    int m_piste;
    std::string m_time;
    bool m_yellowCard;
    bool m_redCard;
    bool m_g3RedCard;
    bool m_blackCard;
    bool m_pYellowCard;
    bool m_pRedCard;
    bool m_pBlackCard;
    
};