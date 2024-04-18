#ifndef MENU_HPP
#define MENU_HPP
#include <vector>
#include "event.hpp"

class CMenu
{
  public:
    void run ();
  
  private:
    int createNewEvent ();
    int loadEvent ();
    std::vector <CEvent> m_events;
};

#endif