nterms = int(input("How many terms? "))

# first two terms
n1, n2 = 0, 1
count = 0

if nterms == 1:
   print("Fibonacci sequence upto ",nterms," :",n1)
   
# generate fibonacci sequence
else:
   print("Fibonacci sequence:")
   while count < nterms:
       print(n1)
       nth = n1 + n2
       # update values
       n1 = n2
       n2 = nth
       count += 1
