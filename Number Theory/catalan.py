# using recursion
def catalan(n):
   #negative value
   if n <=1 :
      return 1
   # Catalan(n) = catalan(i)*catalan(n-i-1)
   res = 0
   for i in range(n):
      res += catalan(i) * catalan(n-i-1)
   return res
   
   
# main
z = int(input("How many Catalan Numbers to be generated?: "))
for i in range(z):
   print (catalan(i))
