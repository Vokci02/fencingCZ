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
    std::string m_time;
    int m_id;
    int m_piste;
    bool m_yellowCard;
    bool m_redCard;
    bool m_g3RedCard;
    bool m_blackCard;
    bool m_pYellowCard;
    bool m_pRedCard;
    bool m_pBlackCard;

};