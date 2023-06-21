#!/usr/bin/env k
x:,"--non-interactive"
\l repl.k
repl.upd:{repl.lines::6;repl.cols::8}
test:{x:"\n"\x;c:*x;e:("\n"/1_x),"\n"; \$[e~r:repl.fmt@.c;`ok;((`FAIL;c);(`EXPECTED;e);(`ACTUAL;r))];}
test'"\n\n"\*|"\n/\n"\1:`argv 1;
/
4 5#"a"
("aaaaa"
 "aaaaa"
 "aaaaa"
 "aaa..)

4 6#"a"
("aaaa..
 "aaaa..
 "aaaa..
 "aaa..)

5 5#"a"
("aaaaa"
 "aaaaa"
 "aaaaa"
 ..)

5 6#"a"
("aaaa..
 "aaaa..
 "aaaa..
 ..)
