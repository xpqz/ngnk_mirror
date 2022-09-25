#!/usr/bin/env k
a:+\`I$(0:"i/01")^'"+"
*|a /part1
(2=#:){(s;v):x;b:s+a;i:(^v?b)?0;$[~^i;b i;(*|b;v,b)]}/(0;!0) /part2
