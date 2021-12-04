#!/home/n/k/k
x:0:"i/04"              /input
r:.*x                   /pseudo-random sequence
b:.''1_'(&""~/:x)_x     /boards
m:|\r=\:b               /m[i;j] - marks on board j after r[i] is announced
w:{|/5=(+/x),+/'x}''m   /w[i;j] - does board j win after r[i] is announced
s:{r[x]*+//b[y]*~m[x]y} /s[i;j] - score of board j after r[i] is announced

i:+/~|/'w
j:*&|/'w i
s[i;j]      /part1

i:+/|/'~w
j:*&~w i-1
s[i;j]      /part2
