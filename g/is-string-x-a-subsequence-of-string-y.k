#!/usr/bin/env k
/ https://codegolf.stackexchange.com/questions/5529/is-string-x-a-subsequence-of-string-y/251189
f:{$[~#x;1;^i:y?*x;0;o[1_x]1_i_y]}

\l 0.k
T[(""    ;"z00"   )]1
T[("z00" ;"z00"   )]1
T[("z00" ;"00z0"  )]0
T[("aa"  ;"anna"  )]1
T[("anna";"banana")]1
T[("Anna";"banana")]0
