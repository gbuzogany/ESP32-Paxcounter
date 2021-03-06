#ifndef _CONFIGMANAGER_H
#define _CONFIGMANAGER_H

#include "globals.h"
#include <Preferences.h>

void saveConfig(bool erase = false);
bool loadConfig(void);
void eraseConfig(void);
int version_compare(const String v1, const String v2);

#endif