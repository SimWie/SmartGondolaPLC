void TEST_init__(TEST *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->INPUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OUTPUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void TEST_body__(TEST *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,OUTPUT,,__GET_VAR(data__->INPUT,));

  goto __end;

__end:
  return;
} // TEST_body__() 





void MAIN_init__(MAIN *data__, BOOL retain) {
  TEST_init__(&data__->TESTFUNKTION,retain);
  __INIT_LOCATED(BOOL,__IX0_0,data__->INPUT0,retain)
  __INIT_LOCATED_VALUE(data__->INPUT0,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX0_0,data__->OUTPUT0,retain)
  __INIT_LOCATED_VALUE(data__->OUTPUT0,__BOOL_LITERAL(FALSE))
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->TESTFUNKTION.,INPUT,,__GET_LOCATED(data__->INPUT0,));
  TEST_body__(&data__->TESTFUNKTION);
  __SET_LOCATED(data__->,OUTPUT0,,__GET_VAR(data__->TESTFUNKTION.OUTPUT,));

  goto __end;

__end:
  return;
} // MAIN_body__() 





