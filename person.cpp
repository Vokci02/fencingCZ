#include "person.hpp"

CPerson::CPerson ( const std::string &name     ,
                   const std::string &surname  ,
                   const std::string &club     ,
                   const std::string &clubShort,
                   const std::string &country  )
  : m_name ( name ), m_surname ( surname ), m_club ( club ), m_clubShort ( clubShort ), m_country ( country )
{
};

std::string CPerson::getName      () const
{
  return m_name;
}

std::string CPerson::getSurname   () const
{
  return m_surname;
}

std::string CPerson::getClub      () const
{
  return m_club;
}

std::string CPerson::getCountry   () const
{
  return m_country;
}

std::string CPerson::getClubShort () const
{
  return m_clubShort;
}