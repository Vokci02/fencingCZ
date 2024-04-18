#ifndef REFEREE_HPP
#define REFEREE_HPP
#include <iostream>
#include <map>
#include "person.hpp"

class CReferee : public CPerson
{
  public:
    CReferee ( const std::string &name     ,
               const std::string &surname  ,
               const std::string &club     ,
               const std::string &clubShort,
               const std::string &country  ,
               const int         id        );
  int                     getId                ()               const;
  void                    addPoolRefered       ( int poolSize )      ;
  void                    addDEMatchRefered    ()                    ;
  void                    addFinalMatchRefered ()                    ;
  int                     calculateSalary      ()               const;
  void                    print                ()               const;

  private:
    std::map <int, int>   m_poolsRefered       ;
    int                   m_deMatchesRefered   ;
    int                   m_finalMatchesRefered;
    int                   m_id                 ;
};

#endif