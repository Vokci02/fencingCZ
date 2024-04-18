#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>

class CPerson
{
  public:
    CPerson ( const std::string &name     ,
              const std::string &surname  ,
              const std::string &club     ,
              const std::string &clubShort,
              const std::string &country  );

    std::string getName      () const;
    std::string getSurname   () const;
    std::string getClub      () const;
    std::string getCountry   () const;
    std::string getClubShort () const; 
  protected:
    std::string m_name;
    std::string m_surname;
    std::string m_club;
    std::string m_clubShort;
    std::string m_country;
};

#endif