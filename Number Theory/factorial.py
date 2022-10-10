#recursive method
def factorial(n):
      
    if n == 0:
        return 1
     
    return n * factorial(n-1)
  
z = int(input("Enter number: "))
print("Factorial of", z, "is", factorial(z))
  
