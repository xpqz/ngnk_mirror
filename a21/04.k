#!/home/n/k/k
x:0:"i/04"        /input
r:.*x             /random sequence
b:.''1_'(&~#'x)_x /boards
m:r?b             /time at which any number on any board is marked
t:{&/|/'x,+x}'m   /time at which any board wins
s:r[t]*+//'b*t<m  /scores
i:<t              /order in which boards win
*s i              /part1
*|s i             /part2

/https://github.com/rak1507/Advent-Of-Code-APL/blob/main/2021/Day%204.dyalog
