#ifndef FENCER_HPP
#define FENCER_HPP
#include "person.hpp"

class CFencer : public CPerson
{
  public:
    CFencer (const std::string &name,
             const std::string &surname,
             const std::string &club,
             const std::string &country,
             const std::string &weapon,
             const bool isLeftHanded,
             const int birthYear,
             const int globalRank,
             const int id);
    std::string getWeapon () const;
    int getGlobalRank () const;
    int getPoolSeed () const;
    int getDESeed () const;
    int getWonPoolMatches () const;
    int getLostPoolMatches () const;
    float getWonPoolMatchesRatio () const;
    int getScoredPoolTouches () const;
    int getReceivedPoolTouches () const;
    int getPoolTouchesIndex () const;
    int getId () const;
    
    void setPoolSeed (int seed);
    void setDESeed (int seed);
    void setWonPoolMatches (int matches);
    void setLostPoolMatches (int matches);
    void setScoredPoolTouches (int touches);
    void setReceivedPoolTouches (int touches);
    void setPoolTouchesIndex (int index);
    
    void calculatePoolMatchesRatio ();
    void calculatePoolTouchesIndex ();

    void print () const;

    bool isLeftHanded;
    bool recievedG3RedCard;
    bool recievedBlackCard;
  private:
    std::string m_weapon;
    int m_birthYear;
    int m_globalRank;
    int m_poolSeed;
    int m_deSeed;
    int m_wonPoolMatches;
    int m_lostPoolMatches;
    float m_wonPoolMacthesRatio;
    int m_scoredPoolTouches;
    int m_receivedPoolTouches;
    int m_poolTouchesIndex;
    int m_id;
};

#endif