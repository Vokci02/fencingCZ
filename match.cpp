#include "match.hpp"

CMatch::CMatch ()
{
  m_leftScore = 0;
  m_rightScore = 0;
  finished = false;
}

std::pair <int, int> CMatch::getScore   ()                            const
{
  return std::make_pair ( m_leftScore, m_rightScore );
}

CFencer CMatch::getWinner               ()                            const
{
  return m_winner;
}

void CMatch::setWinner                  ( const CFencer &winner )
{
  m_winner = winner;
}

void CMatch::print                      ()                            const
{
  std::cout   << "Match: "  << m_leftFencer.getName  () 
              << " vs "     << m_rightFencer.getName () << std::endl;
  std::cout   << "Score: "  << m_leftScore 
              << " : "      << m_rightScore             << std::endl;
}
