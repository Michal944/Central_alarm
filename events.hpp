#include <stdint.h>
#ifndef EVENTS_HPP
#define EVENTS_HPP

class Events 
{
  protected:
         Events();
virtual ~Events();
    uint16_t Code_mesagge;
    uint16_t Level_priority;
    uint32_t Time;   
  public:
    virtual void Send_mesagge() = 0;
    virtual void setOnAlarm();
    virtual void setLevelPriority();    
};

class SMS : public virtual Events
{
  private:
    std::vector<string> text_mesagge;
  public:
    void Send_mesagge() override;
    void setLevelPriority() override;
};

class Server : public virtual Events
{
  //... Next version;
  public:
    void Send_message() override;
    void setLevelPriority() override;
};

class Log_Message : public virtual Events
{       
  public:
    void Send_mesagge() override;
    void setLevelPriority() override;
};
      


#endif
