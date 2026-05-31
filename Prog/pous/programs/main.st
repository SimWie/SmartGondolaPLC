PROGRAM main
VAR
	Input0 : bool AT %IX0.0;
	Output0 : bool AT %QX0.0;
	TestFunktion : TEST;
END_VAR

TestFunktion(
    Input := Input0
);

Output0 := TestFunktion.Output or true;

END_PROGRAM