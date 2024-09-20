import random as rd
print("欢迎来到猜数游戏！")
def main():
    a=rd.randint(1,1000)
    for n in range(100):
        try:
            b=int(input("输入一个数："))
        except ValueError:
            print("格式错误！")
            n=n+1
            continue
        if (b>1000):
            print("范围错误！")
            n=n+1
            continue
        elif(a>b):
            print("小了！")
            n=n+1
            continue
        elif(a<b):
            print("大了！")
            n=n+1
            continue
        else:
            print("恭喜！答案就是{}".format(a))
            return
    print("失败，答案是{}".format(a))
    return
if __name__=="__main__":
    main()    
