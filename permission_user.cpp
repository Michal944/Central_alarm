#include "permission_user.hpp"


Permission_user::Permission_user(std::string NName,
                                 std::string PPassword,
                                 uint16_t    IIdentification)
: User(NName, PPassword, IIdentification)
{}

std::string Permission_user::Whoami()
{
  return Name;
}

