year,month,day=map(int,input().split("/"))
if year%4==0 and year%100!=0 or year%400==0:
    month_list=[0,31,29,31,30,31,30,31,31,30,31,30,31]
else:
    month_list=[0,31,28,31,30,31,30,31,31,30,31,30,31]
print(sum(month_list[:month])+day)