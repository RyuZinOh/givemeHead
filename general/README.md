### is_prime()
-  0,1, and negative are not prime, and even as well beside two
- now checking all the odd divisor using the loop conditions to the n but here the n will be i*i on comparision so that it will have half of the square complexity insted of O(n) and make process a lot fast:
[any number can be written as product of two number like 32 = 2*16, if any number would be bigger than root of n then the overall a*b will be bigger than n, so we can only check the a, b which are lesser than root{n}]
[so checking every number from point to the root of that number would make more sense for the quality]
- then it will return the boolean check as per the conditions

### get_factorial()
- takes a integer parameter
- creates a fact storer
- starts a looping condition from that number  and conditions upto the 0 not equal to 0 tho and decrements it 
- at each decrement we multiply the fact storer with itself to the decremented value until condition
- returns the overall stored fact value as a factorial after condition ends

### is_armstrong()
- takes number parameter
- calculates the digit amount of that number
- to sum the overall it will like strips each last digit and then uses that digits counts to multiply them and sums them overall 
- and returns the true if the overall sum matches the original
- `for example: 153 = 1*1*1 + 5*5*5 + 3*3*3 == 153`


### get_fibonacci_upto_that_n()
- we know fibonacci series is next is always equals to sum or previous two terms
- to genereate series we evaluate the number until the condition with while loop
- in each step we calculate the next number  = previous plus  current
- and then we have to shift the previous and current value, i.e: the current -> previous && next -> current 
- and then we pring the current and repeat the process till the condition
