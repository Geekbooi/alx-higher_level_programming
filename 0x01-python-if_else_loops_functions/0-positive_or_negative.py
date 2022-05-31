#!/usr/bin/python3
import random
number = random.randint(-10, 10)
if number < 0:
<<<<<<< HEAD
        print("{:d} is negative".format(number))
    elif number > 0:
            print("{:d} is positive".format(number))
        else:
                print("0 is zero")
=======
    print("{:d} is negative".format(number))
elif number > 0:
    print("{:d} is positive".format(number))
else:
    print("0 is zero")
>>>>>>> 7e030e29ea77172bc5974070ea7b08b7730384ab
