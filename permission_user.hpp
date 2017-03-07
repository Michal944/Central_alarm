#include "user.hpp"
#ifndef PERMISSION_USER_HPP
#define PERMISSION_USER_HPP

class Permission_user : public virtual User
{
  public:
    static const uint16_t Permission_Read    = 1;
    static const uint16_t Permission_Write   = 2;
    static const uint16_t Permission_Execute = 4;
    Permission_user(std::string, std::string, uint16_t);
    std::string Whoami() override;
};



#endif
