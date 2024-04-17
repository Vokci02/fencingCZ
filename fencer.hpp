#include "person.hpp"
class CFencer : public CPerson
{
  public:
    CFencer (const std::string &name,
             const std::string &surname,
             const std::string &club,
             const std::string &country,
             const std::string &weapon,
             const bool isLeftHanded,
             const int birthYear,
             const int globalRank);
  private:
    std::string m_weapon;
    bool m_isLeftHanded;
    int m_birthYear;
    int m_globalRank;
    int m_poolSeed;
    int m_deSeed;
    int m_wonPoolMatches;
    int m_lostPoolMatches;
    float m_wonPoolMacthesRatio;
    int m_scoredPoolTouches;
    int m_receivedPoolTouches;
    int m_poolTouchesIndex;    
};