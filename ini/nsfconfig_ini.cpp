#include "nsfconfig_ini.h"

using namespace ini;


NSFPlayerConfig::NSFPlayerConfig () : xgm::NSFPlayerConfig()
{
}

NSFPlayerConfig::~NSFPlayerConfig ()
{
}

// Load one
bool NSFPlayerConfig::Load (const char *path, const char *sect, const char *name)
{
  char temp[256];
  GetPrivateProfileString(sect,name,data[name].GetStr().c_str(),temp,255,path);
  data[name] = vcm::Value(temp);
  return true;
}

// Load all
bool NSFPlayerConfig::Load (const char *path, const char *sect)
{
  std::map<std::string, vcm::Value>::iterator it;
  for(it=data.begin(); it!=data.end(); it++)
    Load(path, sect, it->first.c_str());
  return true;
}

bool NSFPlayerConfig::Save (const char *path, const char *sect, const char *name)
{
  WritePrivateProfileString (sect, name, data[name], path);
  return true;
}

bool NSFPlayerConfig::Save (const char *path, const char *sect)
{
  std::map<std::string, vcm::Value>::iterator it;
  for(it=data.begin(); it!=data.end(); it++)
    Save(path, sect, it->first.c_str());

 return true;
}
