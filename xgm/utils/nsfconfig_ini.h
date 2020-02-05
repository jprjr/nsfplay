#ifndef NSFCONFIGINI_H
#define NSFCONFIGINI_H
#include "../player/nsf/nsfconfig.h"

/* a class for saving an NSFConfig to INI files */

namespace xgm {
  class NSFPlayerConfigIni: public NSFPlayerConfig
  {
  public:
    NSFPlayerConfigIni();
    virtual ~NSFPlayerConfigIni();
    virtual bool Load(const char * path, const char *sect);
    virtual bool Save(const char * path, const char *sect);
    virtual bool Load(const char * path, const char *sect, const char *name);
    virtual bool Save(const char * path, const char *sect, const char *name);

  };
}

#endif
