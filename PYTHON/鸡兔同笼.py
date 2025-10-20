heads,legs=map(int,input().split())
x=(legs-heads*2)/2 #兔子的数量
y=heads-x   #鸡的数量
if x>=0 and y>=0 and x==int(x) and y==int(y):
    print(int(y),int(x))
else:
    print("Data Error!")