#!k
x:,"--non-interactive"
\l repl.k
repl.upd:{repl.lines::6;repl.cols::20}
test:{x:"\n"\x;c:*x;e:("\n"/1_x),"\n"; \$[e~r:repl.fmt@.c;`ok;((`FAIL;c);(`EXPCTD;e);(`ACTUAL;r))];}
test'"\n\n"\*|"\n/\n"\1:`argv 1;
/
4 17#"a"
("aaaaaaaaaaaaaaaaa"
 "aaaaaaaaaaaaaaaaa"
 "aaaaaaaaaaaaaaaaa"
 "aaaaaaaaaaaaaaa..)

4 18#"a"
("aaaaaaaaaaaaaaaa..
 "aaaaaaaaaaaaaaaa..
 "aaaaaaaaaaaaaaaa..
 "aaaaaaaaaaaaaaa..)

5 17#"a"
("aaaaaaaaaaaaaaaaa"
 "aaaaaaaaaaaaaaaaa"
 "aaaaaaaaaaaaaaaaa"
 ..)

5 18#"a"
("aaaaaaaaaaaaaaaa..
 "aaaaaaaaaaaaaaaa..
 "aaaaaaaaaaaaaaaa..
 ..)

+`name`value!(`pi`e`phi;314 271 61)
+![ `name `value
 +((`pi  ;   314)
   (`e   ;   271)
   (`phi ;    61))]

+`name`value!(`pi`e`phi`xxx;314 271 61 69)
+![ `name `value
 +((`pi  ;   314)
   (`e   ;   271)
   ..)]

+`name`value`more!(`pi`e`phi`xxx;314 271 61 69;`more)
+![ `name `value `..
 +((`pi  ;   314;..)
   (`e   ;   271;..)
   ..)]

`a`b`cg`d!("alpha";"beta";"gamma";"delta")
!/+((`a ;"alpha")
    (`b ;"beta")
    (`cg;"gamma")
    (`d ;"delta"))

5#`a`b`cg`d!("alpha";"beta";"gamma";"delta")
!/+((`a ;"alpha")
    (`b ;"beta")
    (`cg;"gamma")
    ..)

+`lft`rgt!(0 123 45;-67 8 9)
+![ `lft `rgt
 +((   0; -67)
   ( 123;   8)
   (  45;   9))]

+("lf";"rg")!(0 123 45;-67 8 9)
+![("lf";"rg")
 +((   0; -67)
   ( 123;   8)
   (  45;   9))]
