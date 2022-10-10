# Python program to print prime factors

import math

def primeFactors(n):
    # print the 2s which divide the number
	while n % 2 == 0:
		print (2)
		n = n / 2
		

	for i in range(3,int(math.sqrt(n))+1,2):
		
		# while i divides n , print i and divide n
		while n % i== 0:
			print (i) 
			n = n / i
			
	# Condition if n is a prime number greater than 2
	if n > 2:
		print (n)
		

z = int(input("Enter the number to be prime factorised: "))
primeFactors(z)

# This code is contributed by Harshit Agrawal
