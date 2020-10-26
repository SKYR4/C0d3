import cmath
num = int(input('Enter a number you want to check'))

if num > 1:

   for i in range(2,num):
       if (cmath.sqrt(num) % i) == 0:
           print(num,"is not a prime number")
           print(i,"times",num//i,"is",num)
           break
   else:
       print(num,"is a prime number")
else:
   print(num,"is not a prime number")
