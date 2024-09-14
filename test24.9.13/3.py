# -*- coding: utf-8 -*-
"""
Created on Tue Sep 10 11:36:29 2024

@author: 26756
"""

import random as rd
print("欢迎来到猜数游戏！")
a=rd.randint(1,1000)
def game():
    counter = 1
    while(counter<11): 
        try:
            b=int(input("请输入一个1到1000的整数："))
        except ValueError or b>1000:
            print("输入错误！")
            counter = counter + 1
            continue
        if (a>b):
            print("小了！")
            counter = counter + 1
            continue
        elif (a<b):
            print("大了！")
            counter = counter + 1
            continue    
        else:
            print("答对，答案就是{}。".format(a))
            return
    print("游戏结束，答案是{}。".format(a))
    return
def main():
    game()
if __name__=="__main__":
    main()        