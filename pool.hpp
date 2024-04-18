#ifndef POOL_HPP
#define POOL_HPP
#include <vector>
#include "fencer.hpp"
#include "referee.hpp"
#include "match.hpp"

class CPool 
{
  public:
    CPool ();
  
  private:
    
    std::vector <CFencer>  m_fencers;
    std::vector <CReferee> m_referees;
    std::vector <CMatch>   m_matches;
    bool                   m_finished;
    int                    m_poolNumber;
    int                    m_piste;
    std::string            m_time;
};

#endif