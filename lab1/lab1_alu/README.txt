Class: CS161L 
Section: 021
Group: Shilpa Chirackel && Juan Chavez

Inconsistencies: (none that we can see)

NOTE: We had some trouble with unsigned subtract
and we assumed that the overflow was the opposite of
the carryout (so when the carryout was 0 in the fifth
bit, the overflow would be set to 1, and we are not 
sure that the extra fifth bit is the most significant
bit, but we assumed so).

We also made it so that the carryout was the opposite
of the most significant bit to match the test cases 
that were provided for us (and changed the value of 
the other cases to match the fact that the carryout
was the opposite of the msb accordingly).

Note(2): tmp is of size NUMBITS and not NUMBITS-1.