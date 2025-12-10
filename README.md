The bank account class is private, so it cannot be accessed from outside the class. The balance portion basically stores the "money". It can also store decimal values.
The next part is public and is also a constructor. Other parts of the program have access to these functions, and it sets the starting balance of the account. I chose to have it at 0 so it would be an initial deposit when money was added.
Then, the funds are able to be added to the balance. It is added to the existing balance, but that's just zero. It then prints a message to the screen and saves the deposit to the file
Buying the item is next. You have the item name and price. You can buy the items, but if you don't have enough money, the item would be declined, and the  message would say "not enough funds"
The balance is then shown and ut as a constant, so not modifying other data
Lastly, there are the three items that I bought. I made the prices and added enough funds that you have one cent left. The message shows you bought all three items, and the prints the ending balance at the end.
However, if the items were 2 cents more expensive, the last item could not be bought because of a lack of funds. This would print not enough funds for the last item.
