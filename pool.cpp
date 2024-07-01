#include "pool.hpp"
#include "poolMatch.hpp"

const std::vector < std::pair < int, int > > matchOrder6 = 
{
  {0, 1}, {3, 2}, {5, 4}, {2, 0}, {1, 5}, {4, 3}, {0, 5}, {2, 4}, {3, 1}, {4, 0}, {5, 3}, {1, 2}, {0, 3}, {4, 1}, {2, 5}
};

const std::vector < std::pair < int, int > > matchOrder7 = 
{
  {0, 3}, {1, 4}, {2, 5}, {6, 0}, {4, 3}, {1, 2}, {5, 6}, {4, 0}, {3, 2}, {5, 1}, {4, 6}, {2, 0},
  {3, 5}, {6, 1}, {2, 4}, {0, 5}, {1, 3}, {6, 2}, {5, 4}, {0, 1}, {3, 6}
};

CPool::CPool () 
{
}

void CPool::addFencer ( const CFencer &fencer )
{
  m_fencers.push_back ( fencer );
}

void CPool::addReferee ( const CReferee &referee )
{
  m_referees.push_back ( referee );
}

void CPool::addMatch ( const CMatch &match )
{
  m_matches.push_back ( match );
}

void CPool::setFinished ( bool finished )
{
  m_finished = finished;
}

void CPool::setPoolNumber ( int poolNumber )
{
  m_poolNumber = poolNumber;
}

void CPool::setPiste ( int piste )
{
  m_piste = piste;
}

void CPool::setTime ( std::string time )
{
  m_time = time;
}

void CPool::print () const
{
  std::cout << "Pool number: " << m_poolNumber << std::endl;
  std::cout << "Piste: " << m_piste << std::endl;
  std::cout << "Time: " << m_time << std::endl;
  printFencers ();
  printReferees ();
  printMatches ();
}

void CPool::printFencers () const
{
  std::cout << "Fencers: " << std::endl;
  for ( auto fencer : m_fencers )
  {
    fencer.print ();
  }
}

void CPool::printReferees () const
{
  std::cout << "Referees: " << std::endl;
  for ( auto referee : m_referees )
  {
    referee.print ();
  }
}

void CPool::printMatches () const
{
  std::cout << "Matches: " << std::endl;
  for ( auto match : m_matches )
  {
    match.print ();
  }
}

bool CPool::getFinished () const
{
  return m_finished;
}

int CPool::getPoolNumber () const
{
  return m_poolNumber;
}

int CPool::getPiste () const
{
  return m_piste;
}

std::string CPool::getTime () const
{
  return m_time;
}

std::vector <CFencer> CPool::getFencers () const
{
  return m_fencers;
}

std::vector <CReferee> CPool::getReferees () const
{
  return m_referees;
}

std::vector <CMatch> CPool::getMatches () const
{
  return m_matches;
}

int CPool::createMatches ()
{
  int matchId = 0;
  if ( m_fencers.size () == 6 )
  {
    for ( auto match : matchOrder6 )
    {
      CPoolMatch poolMatch ( matchId );
      poolMatch.assignFencers ( m_fencers[match.first], m_fencers[match.second] );
      m_matches.push_back ( poolMatch );
      matchId++;
    }
  }
  else if ( m_fencers.size () == 7 )
  {
    for ( auto match : matchOrder7 )
    {
      CPoolMatch poolMatch ( matchId );
      poolMatch.assignFencers ( m_fencers[match.first], m_fencers[match.second] );
      m_matches.push_back ( poolMatch );
      matchId++;
    }
  }
  else
  {
    // TODO: Support for bigger pools
  }
  return 0;
}


