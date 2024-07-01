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
    void                   addFencer     ( const CFencer  & fencer     );
    void                   addReferee    ( const CReferee & referee    );
    void                   addMatch      ( const CMatch   & match      );
    void                   setFinished   ( bool             finished   );
    void                   setPoolNumber ( int              poolNumber );
    void                   setPiste      ( int              piste      );
    void                   setTime       ( std::string      time       );
    void                   print         () const;
    void                   printFencers  () const;
    void                   printReferees () const;
    void                   printMatches  () const;
    bool                   getFinished   () const;
    int                    getPoolNumber () const;
    int                    getPiste      () const;
    std::string            getTime       () const;
    std::vector <CFencer>  getFencers    () const;
    std::vector <CReferee> getReferees   () const;
    std::vector <CMatch>   getMatches    () const;
    int                    createMatches ();

  
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