#include <map>
#include "person.hpp"
class CReferee : public CPerson
{
  public:
    CReferee (const std::string &name,
              const std::string &surname,
              const std::string &club,
              const std::string &country);
  private:
    std::map <int, int> m_poolsRefered;
    int m_deMatchesRefered;
    int m_finalMatchesRefered;
};