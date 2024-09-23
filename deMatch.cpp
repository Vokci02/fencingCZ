#include "deMatch.hpp"

CDEMatch::CDEMatch (int matchID)
{
  id = matchID;
  finished = false;
}

int CDEMatch::assignFencers ( const CFencer &fencer1, const CFencer &fencer2 )
{
  if ( fencer1 . isLeftHanded && !fencer2 . isLeftHanded)
  {
    m_leftFencer = fencer1;
    m_rightFencer = fencer2;
  }
  else if ( !fencer1 . isLeftHanded && fencer2 . isLeftHanded)
  {
    m_leftFencer = fencer2;
    m_rightFencer = fencer1;
  }
  else
  {
    if ( fencer1 . getDESeed () % 2 )
    {
      m_leftFencer = fencer2;
      m_rightFencer = fencer1;
    }
    else
    {
      m_leftFencer = fencer1;
      m_rightFencer = fencer2;
    }
  }
  return 0;
}
