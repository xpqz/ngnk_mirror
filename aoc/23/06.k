#!../../k
/x(t-x) ⩾ d
/x^2-tx+d ⩽ 0
/t:time, d:distance, r:roots, D:determinant, f:number of integer solutions
f:{[t;d]
 D:(t*t)-4*d
 r:(t-%D;t+%D)%2
 1+-/(_r 1;-_-r 0)}

x:(1_*|":"\)'0:"i/06"
*/f..'x      /1
*/f..'x^'" " /2
