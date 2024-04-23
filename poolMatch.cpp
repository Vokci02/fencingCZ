#include "poolMatch.hpp"

CPoolMatch::CPoolMatch () 
    : CMatch ()
{
}

int CPoolMatch::assignFencers ( const CFencer &fencer1, const CFencer &fencer2 )
{
  m_leftFencer = fencer1;
  m_rightFencer = fencer2;
  return 0;
}

int CPoolMatch::checkScoreIn  ( int leftScore         , int rightScore         )
{
  if ( leftScore < 0 || rightScore < 0 )
    return -1;
  if ( leftScore > 5 || rightScore > 5 )
    return -1;
  if ( leftScore == 5 && rightScore == 5 )
    return -1;
  if ( leftScore == rightScore )
    return 1;
  return 0;
}

int CPoolMatch::finishMatch   ( int leftScore          , int rightScore        )
{
  if ( checkScoreIn ( leftScore, rightScore ) == 1 )
  {
    std::cout << "Score is a tie! -> Set winner manually!" << std::endl;
    std::cout << "Enter winner (1 for left, 2 for right): ";
    int winner;
    if ( scanf ( "%d", &winner ) != 1 )
      return -1;
    if ( winner == 1 )
      m_winner = m_leftFencer;
    else if ( winner == 2 )
      m_winner = m_rightFencer;
    else
      return -1;
  }
  
  if ( checkScoreIn ( leftScore, rightScore ) == -1 )
    return -1; 
  
  m_leftScore = leftScore;
  m_rightScore = rightScore;
  if ( leftScore > rightScore )
    m_winner = m_leftFencer;
  else
    m_winner = m_rightFencer;
  
  finished = true;
  return 0;
}

int CPoolMatch::repairScore   ( int leftScore           , int rightScore        )
{
  if (!finished)
    return -2;
  
  if ( checkScoreIn ( leftScore, rightScore ) == 1)
  {
    std::cout << "Score is a tie! -> Set winner manually!" << std::endl;
    std::cout << "Enter winner (1 for left, 2 for right): ";
    int winner;
    if ( scanf ( "%d", &winner ) != 1 )
      return -1;
    if ( winner == 1 )
      m_winner = m_leftFencer;
    else if ( winner == 2 )
      m_winner = m_rightFencer;
    else
      return -1;
  }

  if ( checkScoreIn ( leftScore, rightScore ) == -1 )
    return -1;

  m_leftScore = leftScore;
  m_rightScore = rightScore;
  if ( leftScore > rightScore )
    m_winner = m_leftFencer;
  else
    m_winner = m_rightFencer;

  finished = true;
  return 0;
}

void CPoolMatch::print      ()                                                          const
{
  std::cout << "Pool match: "              <<    m_leftFencer.getName  () 
            << " vs "                      <<    m_rightFencer.getName ()    << std::endl;
  std::cout << "Score: "                   <<    m_leftScore 
            << " : "                       <<    m_rightScore                << std::endl;
  if ( finished )
    std::cout << "Winner: "                <<    m_winner.getName      ()    << std::endl;
  else
    std::cout << "Match not finished yet!"                                   << std::endl;
}