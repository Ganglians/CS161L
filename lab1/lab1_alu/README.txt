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

Note(2): tmp is of size NUMBITS and not NUMBITS-1.