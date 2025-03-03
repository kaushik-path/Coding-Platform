#Nth Fibonacci Number https://www.naukri.com/code360/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

j=0
k=1
m=0
n=int(input())

if n<=1:
    print(1)
else:
    for i in range(1,n):
        m = j+k
        j = k
        k = m
    print(m)
