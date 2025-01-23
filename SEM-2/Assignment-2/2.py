Products = {}
print("ENTER THE DATA OF PRODUCTS")
print("Type enq to go to the product enquiry OR\n")

while True:
    Name = input("Enter the product name: ")
    if Name == "enq":
        break
    else:
        try:
            val = float(input("Enter the price of product: "))
            Products[Name] = val
        except ValueError:
            print("Invalid Price. Please Try Again")

print("\nPRODUCT ENQUIRY")
print("Enter exit if you want to exit OR")

while True:
    Name = input("Enter the product name: ")
    if Name == "exit":
        break
    if Name in Products:
        print("Price: %d"%(Products[Name]))
    else:
        print("Product is not available")

print("Thank You")
