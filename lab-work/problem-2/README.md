# Description 

Write a program in C to calculate and print the electricity bill of a given customer. The
customer ID, name, and unit consumed by the user should be captured from the keyboard
to display the total amount to be paid to the customer.

The charge are as follow :

| Units Range               | Charge per Unit |
|---------------------------|-----------------|
| Up to 199                 | ৳1.20           |
| 200 to 399                | ৳1.50           |
| 400 to 599                | ৳1.80           |
| 600 and above             | ৳2.00           |


If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill
should be of ৳ 100/-

## Testing : 

	input 				output

	1001				Customer IDNO :1001
	James				Customer Name :James
	800				unit Consumed :800
					Amount Charges @Tk. 2.00 per unit : 1600.00
					Surchage Amount : 240.00
					Net Amount Paid By the Customer : 1840.00