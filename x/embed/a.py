#!/usr/bin/env python3
# https://gist.github.com/effbiae/8e0710bd689d2abfdc15cc432b0a52ad

# - a python3 translation of x/embed/a.c
# - does not work in python2
# $ make libk.so
# $ LD_LIBRARY_PATH=. python3 x/embed/a.py

from ctypes import *
k=CDLL('libk.so')

# declare the function signatures
K=c_void_p
K2f=CFUNCTYPE(K,K,K)
iK=k.iK;iK.restype=c_int;iK.argtypes=[K]
Ki=k.Ki;Ki.restype=K;    Ki.argtypes=[c_int]
KR=k.KR;KR.restype=K;    KR.argtypes=[c_char_p,K2f,c_int]
KC=k.KC;KC.restype=K;    KC.argtypes=[c_char_p,c_int]
K1=k.K1;K1.restype=K;    K1.argtypes=[c_char,K]

def add(x,y):
 print("add()")
 a=iK(x)
 b=iK(y)
 c=a+b
 return Ki(c)

def til(x):
 import numpy as np
 a=np.empty(x,np.int32)
 IK=k.IK;IK.argtypes=[np.ctypeslib.ndpointer(np.int32),K]
 IK(a,K1(b'!',Ki(x)))
 return a

def main():
 print("kinit()"); k.kinit()
 print("KR()");    KR(b"add",K2f(add),2)
 print("KC()");    s=KC(b"`0:$add[2;3]",13)
 print("K1()");    K1(b'.',s)
 print("til(5)");  print(til(5))
 print("return");  return 0

if __name__=='__main__':
 main()
