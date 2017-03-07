#include "permission_user.hpp"
#include <list>

#ifndef CREATE_USER_HPP
#define CREATE_USER_HPP

class Create_user
{
  private:
    Create_user();
    Create_user(Create_user&);
    void operator= (Create_user&);
    
    std::string Password_root;
    Permission_user root("root", Password_root, 0);

    std::list<User*> List_User;
  public:
    



#endif
