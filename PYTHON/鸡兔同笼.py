heads,legs=map(int,input().split())
x=(legs-heads*2)/2 #���ӵ�����
y=heads-x   #��������
if x>=0 and y>=0 and x==int(x) and y==int(y):
    print(int(y),int(x))
else:
    print("Data Error!")