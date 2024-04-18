#include "fencer.hpp"

CFencer::CFencer ( const std::string &name         ,
                   const std::string &surname      ,
                   const std::string &club         ,
                   const std::string &clubShort    ,
                   const std::string &country      ,
                   const std::string &weapon       ,
                   const bool         leftHandiness,
                   const int          birthYear    ,
                   const int          globalRank   ,
                   const int          id           )
  : CPerson ( name, surname, club, clubShort, country )
{
  m_weapon = weapon;
  isLeftHanded = leftHandiness;
  m_birthYear = birthYear;
  m_globalRank = globalRank;
  m_id = id;
  recievedBlackCard = false;
  recievedG3RedCard = false;
  m_deSeed = 999;
  m_poolSeed = 999;
  m_wonPoolMatches = 0;
  m_lostPoolMatches = 0;
  m_scoredPoolTouches = 0;
  m_receivedPoolTouches = 0;
  m_poolTouchesIndex = 0;
  m_wonPoolMacthesRatio = 0;
  m_checkedIn = false;
  m_scratched = false;

}

std::string CFencer::getWeapon        ()                const
{
  return m_weapon;
}

int CFencer::getGlobalRank            ()                const
{
  return m_globalRank;
}

int CFencer::getPoolSeed              ()                const
{
  return m_poolSeed;
}

int CFencer::getDESeed                  ()              const
{
  return m_deSeed;
}

int CFencer::getWonPoolMatches          ()              const
{
  return m_wonPoolMatches;
}

int CFencer::getLostPoolMatches         ()              const
{
  return m_lostPoolMatches;
}

float CFencer::getWonPoolMatchesRatio   ()              const
{
  return m_wonPoolMacthesRatio;
}

int CFencer::getScoredPoolTouches       ()              const
{
  return m_scoredPoolTouches;
}

int CFencer::getReceivedPoolTouches     ()              const
{
  return m_receivedPoolTouches;
}

int CFencer::getPoolTouchesIndex        ()              const
{
  return m_poolTouchesIndex;
}

int CFencer::getId                      ()              const
{
  return m_id;
}

bool CFencer::isCheckedIn               ()              const
{
  return m_checkedIn;
}

bool CFencer::isScratched               ()              const
{
  return m_scratched;
}

void CFencer::setPoolSeed               ( int seed )
{
  m_poolSeed = seed;
}

void CFencer::setDESeed                 ( int seed )
{
  m_deSeed = seed;
}

void CFencer::setWonPoolMatches         ( int matches )
{
  m_wonPoolMatches = matches;
}

void CFencer::setLostPoolMatches        ( int matches )
{
  m_lostPoolMatches = matches;
}

void CFencer::setScoredPoolTouches      ( int touches )
{
  m_scoredPoolTouches = touches;
}

void CFencer::setReceivedPoolTouches    ( int touches )
{
  m_receivedPoolTouches = touches;
}

void CFencer::setPoolTouchesIndex       ( int index )
{
  m_poolTouchesIndex = index;
}

void CFencer::checkIn                   ()
{
  m_scratched = false;
  m_checkedIn = true;
}

void CFencer::scratch                   ()
{
  m_checkedIn = false;
  m_scratched = true;
}

void CFencer::calculatePoolMatchesRatio ()
{
  m_wonPoolMacthesRatio = (float)m_wonPoolMatches / ( m_wonPoolMatches + m_lostPoolMatches );
}

void CFencer::calculatePoolTouchesIndex ()
{
  m_poolTouchesIndex = m_scoredPoolTouches - m_receivedPoolTouches;
}

void CFencer::print                     () const 
{
  std::cout << "Fencer: "                <<     m_name
            << " "                       <<     m_surname                 << std::endl;
  std::cout << "Club: "                  <<     m_club                    << std::endl;
  std::cout << "Country: "               <<     m_country                 << std::endl;
  std::cout << "Weapon: "                <<     m_weapon                  << std::endl;
  std::cout << "Birth year: "            <<     m_birthYear               << std::endl;
  std::cout << "Global rank: "           <<     m_globalRank              << std::endl;
  std::cout << "ID: "                    <<     m_id                      << std::endl;
  std::cout << "Pool seed: "             <<     m_poolSeed                << std::endl;
  std::cout << "DE seed: "               <<     m_deSeed                  << std::endl;
  std::cout << "Won pool matches: "      <<     m_wonPoolMatches          << std::endl;
  std::cout << "Lost pool matches: "     <<     m_lostPoolMatches         << std::endl;
  printf     ( "Won pool matches ratio: %.2f\n",m_wonPoolMacthesRatio                );
  std::cout << "Scored pool touches: "   <<     m_scoredPoolTouches       << std::endl;
  std::cout << "Received pool touches: " <<     m_receivedPoolTouches     << std::endl;
  std::cout << "Pool touches index: "    <<     m_poolTouchesIndex        << std::endl;
  std::cout << "Checked in: "            <<     m_checkedIn               << std::endl;
  std::cout << "Scratched: "             <<     m_scratched               << std::endl;
  std::cout << "Left handed: "           <<     isLeftHanded              << std::endl;
  std::cout << "Recieved G3 red card: "  <<     recievedG3RedCard         << std::endl;
  std::cout << "Recieved black card: "   <<     recievedBlackCard         << std::endl;    
}