# TODO

# Card Number input
Number = int(input("Number: "))
print(Number)

# Sum of the digits that were multiplied by 2
secondsum = 0

# sum of the digits that weren't multiplied by 2
lastsum = 0

#  Credit number saved for later use
NumPreserved = Number

# Digit Count
count = 0

# Checksum Calculation
while Number:

    lastsum = lastsum + Number % 10
    Number = Number / 10
    count+1
    if Number % 10 < 5:
        secondsum = secondsum + (Number % 10) * 2
    else:
        secondsum = secondsum + ((Number % 10) * 2) % 10 + \
            ((Number % 10) * 2) / 10
    Number = Number / 10
    if Number > 0:
        count+1

# Validating Checksum
    if (lastsum + secondsum) % 10 == 0:
        # Checking for card length
        if count == 13 or count == 15 or count == 16:
            # Fetching first two Digits
            while NumPreserved / 100 > 0:
                NumPreserved = NumPreserved / 10
            #  Checking starting Digits
            if NumPreserved == 34 or NumPreserved == 37:
                print("AMEX")
            elif NumPreserved > 50 and NumPreserved < 56:
                print("MASTERCARD")
            elif NumPreserved / 10 == 4:
                print("VISA")
            else:
                print("INVALID")
        else:
            print("INVALID")
    else:
        print("INVALID")
