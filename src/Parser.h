#pragma once

#include "Store.h"

bool parseAtt(Store* store, Logger logger, const void * ptr, size_t size);

bool parseRVM(Store* store, const void * ptr, size_t size);
