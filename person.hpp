#include <string>
class CPerson
{
  public:
    CPerson (const std::string &name,
             const std::string &surname,
             const std::string &club,
             const std::string &country);

  private:
    std::string m_name;
    std::string m_surname;
    std::string m_club;
    std::string m_country;
};