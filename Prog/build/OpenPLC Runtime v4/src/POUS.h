#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

// FUNCTION_BLOCK TEST
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,INPUT)
  __DECLARE_VAR(BOOL,OUTPUT)

  // FB private variables - TEMP, private and located variables

} TEST;

void TEST_init__(TEST *data__, BOOL retain);
// Code part
void TEST_body__(TEST *data__);
// PROGRAM MAIN
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  TEST TESTFUNKTION;
  __DECLARE_LOCATED(BOOL,INPUT0)
  __DECLARE_LOCATED(BOOL,OUTPUT0)

} MAIN;

void MAIN_init__(MAIN *data__, BOOL retain);
// Code part
void MAIN_body__(MAIN *data__);
#endif //__POUS_H
