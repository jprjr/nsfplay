#ifndef _NSFCONFIG_INI_H_
#define _NSFCONFIG_INI_H_
#include "../xgm/player/nsf/nsfconfig.h"

namespace ini
{

  class NSFPlayerConfig : public xgm::NSFPlayerConfig
  {
  public:
    NSFPlayerConfig ();
    virtual ~NSFPlayerConfig();
    virtual bool Load(const char * path, const char *sect);
    virtual bool Save(const char * path, const char *sect);
    virtual bool Load(const char * path, const char *sect, const char *name);
    virtual bool Save(const char * path, const char *sect, const char *name);
  };

}// namespace

#endif
