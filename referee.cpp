//#include <iostream>
#include "referee.hpp"

CReferee::CReferee( const std::string &name,
                    const std::string &surname,
                    const std::string &club,
                    const std::string &country,
                    const int         id )
    : CPerson ( name, surname, club, country )
{
  m_id = id;
  m_deMatchesRefered = 0;
  m_finalMatchesRefered = 0;
}

int CReferee::getId () const
{
  return m_id;
}

void CReferee::addPoolRefered ( int poolSize )
{
  if ( m_poolsRefered.find( poolSize ) == m_poolsRefered.end () )
    m_poolsRefered.insert ( std::make_pair ( poolSize, 1 ) );
  else
    m_poolsRefered [ poolSize ]++;
}

void CReferee::addDEMatchRefered ()
{
  m_deMatchesRefered++;
}

void CReferee::addFinalMatchRefered ()
{
  m_finalMatchesRefered++;
}

int CReferee::calculateSalary () const
{
  int salary = 0;
  for (int i = 0; i < m_deMatchesRefered; i++)
    salary += 50;
  for (int i = 0; i < m_finalMatchesRefered; i++)
    salary += 80;
  for (std::map <int, int>::const_iterator it = m_poolsRefered.begin (); it != m_poolsRefered.end (); it++)
  {
    salary += (120 + ( ( it -> first ) - 6 ) * 30) * ( it -> second ); 
  }
  return salary;
}

void CReferee::print () const
{
  std::cout << "Referee: " << m_name << " " << m_surname << std::endl;
  std::cout << "Club: " << m_club << std::endl;
  std::cout << "Country: " << m_country << std::endl;
  std::cout << "ID: " << m_id << std::endl;
  std::cout << "Salary: " << calculateSalary () << std::endl;
  std::cout << "Pools refered: " << std::endl;
  for (std::map <int, int>::const_iterator it = m_poolsRefered.begin (); it != m_poolsRefered.end (); it++)
  {
    std::cout << "Pool size: " << it -> first << " - " << it -> second << " times" << std::endl;
  }
  std::cout << "DE matches refered: " << m_deMatchesRefered << std::endl;
  std::cout << "Final matches refered: " << m_finalMatchesRefered << std::endl;
}