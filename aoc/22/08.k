#!/usr/bin/env k
a:-48+0:"i/08"

/part1
+//|/(!4)(+|:)/'(-1>':|\)'(|+:)\a

/part2
s:{ /scenic score
 h:(|y#a x;1_y_a x;|x#a[;y];1_x_a[;y])
 */1+(-1+#'h)^'(a[x;y]>h)?'0}
|/s/'+!(#a;#*a)
