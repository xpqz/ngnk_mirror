#!../k
a:0:"i/02"       /input lines
C:"duf"?*'a      /commands(0=down,1=up,2=forward)
X:`I$ :/'a       /units
d:+/D:X*1 -1 0 C /depths
h:+/H:X*2=C      /horizontal positions
h*d              /part1
h*+/H*+\D        /part2
