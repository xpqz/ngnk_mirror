#!/usr/bin/env k
x:0:"i/16"

/x:("Valve AA has flow rate=0; tunnels lead to valves DD, II, BB"
/   "Valve BB has flow rate=13; tunnels lead to valves CC, AA"
/   "Valve CC has flow rate=2; tunnels lead to valves DD, BB"
/   "Valve DD has flow rate=20; tunnels lead to valves CC, AA, EE"
/   "Valve EE has flow rate=3; tunnels lead to valves FF, DD"
/   "Valve FF has flow rate=0; tunnels lead to valves EE, GG"
/   "Valve GG has flow rate=0; tunnels lead to valves FF, HH"
/   "Valve HH has flow rate=22; tunnel leads to valve GG"
/   "Valve II has flow rate=0; tunnels lead to valves AA, JJ"
/   "Valve JJ has flow rate=21; tunnel leads to valve II")

(v;r;h):``I`$+{x:" "\x^",";(x 1;5_-1_x 4;9_x)}'x /valve;rate;neighbours
g:(1;_1e9;0)g|2*=#g:^h?\:v /graph
g:{x(&/+)\:x}/g /shortest paths
i:?(v?`AA),&0<r /keep only "interesting" vertices (AA and those with rate >0)
g.:2#,i
r@:i
n:#i

{[x;u;t]$[0>t;0;(t*r x)+0|/o'[u;u_/:!#u;(t-1)-g[x;u]]]}[0;&0<r;30] /part1
