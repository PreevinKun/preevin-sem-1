def calculate_bill(units, rates):
	full_blocks = units // 100
	remaining_units = units % 100
	bill = 0

	for block in range(full_blocks):
		if block == 0:
			bill += 100 * rates[0]
		elif block < 3:
			bill += 100 * rates[1]
		else:
			bill += 100 * rates[2]

	if full_blocks == 0:
		remaining_rate = rates[0]
	elif full_blocks < 3:
		remaining_rate = rates[1]
	else:
		remaining_rate = rates[2]

	bill += remaining_units * remaining_rate
	return bill


units = int(input("Enter the number of units: "))
customer_type = int(input("Press 0 for household and 1 for commercial: "))
date = int(input("Enter the date of payment e.g. 1, 4, 17: "))

if customer_type == 0:
	bill_amount = calculate_bill(units, (5, 6, 8))
	peak_charge = 50
elif customer_type == 1:
	bill_amount = calculate_bill(units, (10, 12, 15))
	peak_charge = 100
else:
	print("Invalid input")
	bill_amount = 0
	peak_charge = 0

if customer_type in (0, 1):
	peak = input("Is peak threshold found [yes/no]: ")
	if peak == "yes":
		bill_amount += peak_charge

print(f"Bill amount is: {bill_amount}")
