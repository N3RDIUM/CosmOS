#include "libgloss/mn10200/syscall.h"

int __trap0 ();

#define TRAP0(f, p1, p2, p3) __trap0(f, (p1), (p2), (p3))
