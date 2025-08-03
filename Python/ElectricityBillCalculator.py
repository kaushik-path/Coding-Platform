# Question 3: Electricity Bill Calculator
# Take input for:

# Number of units consumed

# Use this logic:

# Units Consumed	Rate per unit
# 0–100	                 ₹5
# 101–200	             ₹7
# 201–300	             ₹10
# Above 300	             ₹15

# Print total bill.

def ElectricBill(n):
    Total=0
    if n>0:
        if 1<= n <= 100:
                Total = n * 5
        elif 101<= n <=200:
                Total = 100*5 + (n-100)*7
        elif 201<= n <=300:
                Total = 100*5 + 100*7 + (n-200)*10
        else:
                Total = 100*5 + 100*7 + 100*10 + (n-300)*15
        print(Total)
    else:
        print("AAP")

B=int(input())
ElectricBill(B)

