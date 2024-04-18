#include "person.hpp"

CPerson::CPerson ( const std::string &name     ,
                   const std::string &surname  ,
                   const std::string &club     ,
                   const std::string &clubShort,
                   const std::string &country  )
  : m_name ( name ), m_surname ( surname ), m_club ( club ), m_clubShort ( clubShort ), m_country ( country )
{
};