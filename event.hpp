#ifndef EVENT_HPP
#define EVENT_HPP
#include <string>
#include <vector>
#include "fencer.hpp"
#include "referee.hpp"
#include "pool.hpp"

class CEvent
{
  public:
    CEvent ( const std::string &name    ,
             const std::string &date    ,
             const std::string &time    ,
             const std::string &location,
             const std::string &weapon  ,
             const std::string &gender  ,
             const std::string &category,
             const std::string &format  );

  private:
    int createPools ();
    int createDE    ();
    
    std::string            m_name;
    std::string            m_date;
    std::string            m_time;
    std::string            m_location;
    std::string            m_weapon;
    std::string            m_gender;
    std::string            m_category;
    std::string            m_format;
    std::vector <CFencer>  m_fencers;
    std::vector <CReferee> m_referees;
    std::vector <CPool>    m_pools;
};

#endif