#!../k
a:+2!0:"i/03"   /input
m:{~(#x)>2*+/x} /majority
*/2/'1~:\m'a    /part1
**/2/a@\:{(1<#x)((z=/1 m\y@)#)/x}/[!#*a;a;]'!2 /part2
