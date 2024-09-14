# -*- coding: utf-8 -*-
"""
Created on Wed Sep  4 17:47:44 2024

@author: 26756
"""

def A(b,c):
    a=b 
    b=c 
    c=a 
    return(b,c)
def main():
    x,y=map(int,input("输入两个数：").split())
    A(x,y)
    print("x={},y={}".format(x,y))
    x,y=A(x,y)
    print("x={},y={}".format(x,y))
if __name__=="__main__":
    main()