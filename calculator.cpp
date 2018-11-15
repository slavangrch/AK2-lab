#include "calculator.h"

/*
  The name "git" was given by Linus Torvalds when he wrote 
  the very first version. He described the tool as "the stupid
  content tracker" and the name as (depending on your mood): - random 
  three-letter combination that is pronounceable, and not actually
  used by any common UNIX command.
*/

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
