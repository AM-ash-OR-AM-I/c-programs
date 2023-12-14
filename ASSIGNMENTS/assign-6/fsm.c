/*
A finite state machine (FSM) consists of a set of states, a set of transitions,
and a string of input data. In the FSM of Figure 1, the named ovals represent
states, and the arrows connecting the states represent transitions. The FSM is
designed to recognize a list of C identifiers and nonnegative integers, assuming
that the items are ended by one or more blanks and that a period marks the end
of all the data. The following table traces how the diagrammed machine would
process a string composed of one blank, the digits 9 and 5, two blanks, the
letter K, the digit 9, one blank, and a period. The machine begins in the start
state.
*/

#include <stdio.h>

int main() { printf("%d %d", ~-15, ~15); }