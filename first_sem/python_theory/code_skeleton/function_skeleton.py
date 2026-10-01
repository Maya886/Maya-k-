#complete the five functions below.then complete the main program so it calls them                                                                               
#and prints the bill.       
#get_price(item) returns the price of the item.
#it returns 0 if the item is not on the menu.
#item_cost(item,qty) returns the cost of buying qty of an item.
#it nust use get_price().
#calculate_gst(amount,rate=0.5) returns the cost of buying qty of an item.
#the rate is 5% unless another rate is given.
#generate_bill(subtotal,discount_percentage=0)
#returns three values:the discount,,the gst
#(calculate on the amount after the discount),and the final total.
#split_bill(total,people) returns two values:the whole rupees each person pays,and the rupees left over


def get_price(item):
    if item == "idli":
        return 30
    elif item == "dosa":
        return 50
    elif item == "cofee":
        return 15
    elif item == "golibaje":
        return 60
    elif item == "tea":
        return 10
        
    else:
        return 0

    
def item_cost(item, qty):
    price=get_price(item)
    return price*qty
    # TODO: call get_price() and return the cost


def calculate_gst(amount, rate=0.05):
    gst=amount*rate
    return round(gst,2)
# TODO: return the GST rounded to 2 decimals


def generate_bill(subtotal, discount_percent=0):
    discount =subtotal*discount_percent
    amount_after_discount =subtotal-discount
    gst =calculate_gst(amount_after_discount)  # TODO: call calculate_gst()
    total =amount_after_discount+gst
    return discount,gst,total


def split_bill(total, people):
    each_pays =total/people                   
    left_over = total%people                   # or total-(eachh_pays*people)
    return each_pays,left_over


# ---------------- Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.

subtotal1 = item_cost('dosa',2)                                        # TODO: call item_cost() for dosa and coffee and add 
discount1, gst1, total1 =generate_bill(subtotal1,0.10)                    # TODO: call generate_bill() using a KEYWORD argument
subtotal2 = item_cost('cofee',3) 
discount2, gst2, total2 =generate_bill(subtotal2,0.10) 


each, extra =split_bill(total1+total2,3)                                       # TODO: call split_bill() with the total (as a whole number) and 3 people

print("Subtotal of Item1          :", subtotal1)
print("Discount applied for Item1 :", discount1)
print("GST applied for Item1      :", gst1)
print("Total cost of Item1        :", total1)

print("Subtotal of  Item2         :", subtotal2)
print("Discount applied for Item2 :", discount2)
print("GST applied for Item2      :", gst2)
print("Total cost of Item2        :", total2)

print("Cost each person have pay  :",round(each), "| Left over cost after each pay  :",round(extra))