#pragma once

#include "Person.h"

typedef int Key;
typedef Person* Value;

enum SlotStatus {EMPTY, DELETED, INUSE};

typedef struct _slot
{
	Key key;
	Value value;
	enum SlotStatus status;
} Slot;