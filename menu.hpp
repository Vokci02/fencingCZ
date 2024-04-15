#include <vector>
#include "event.hpp"
class CMenu
{
  public:
    void run ();
  
  private:
    createNewEvent ();
    loadEvent ();
    std::vector <CEvent> m_events;
}