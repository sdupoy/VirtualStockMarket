# VirtualStockMarket
Virtual Stock Market in C++ using Windows Forms

Purpose and Scope
This project is the final project of the ITMD 512 course of IIT. 
The project is about designing and implementing a virtual stock market. 
The user, after a login with a 4-digit PIN, will have the choice to buy or sell shares. 
In both cases, the user should input the NYSE symbol of the concerned stock, the number of shares to be bought or sold, the date of the purchase and the price per share. A receipt of the transaction is displayed, showing the date of the transaction, the stock purchased, the number of shares purchased and the total purchase price. A 10% brokerage fee should be added to the total purchase price. A history of the daily transactions is to be saved in a file.


Extract from the requirements

The program will allow a user to enter their personal pin number (only 4 numbers allowed from 0007 to 7000). 
The user then must choose which account they would like to make a transaction: Buy or Sell. 
If the user chooses to buy stock, then the user is to enter the Stock Symbol (check NYSE), the number of shares to purchase, and time to purchase (now, tomorrow, etc.), and the purchase price. The output for the user should be a “receipt” showing the date of the transaction, the stock purchased, the number of shares purchased and the total purchase price. A 10% brokerage fee should be added to the total purchase price.
If the user chooses to sell stock, then the user is to enter the Stock Symbol (check NYSE or NASDAQ), the number of shares to sell, and time to sell (now, tomorrow, etc.), and the selling price. The output for the user should be a “receipt” showing the date of the transaction, the stock sold, the number of shares sold and the total revenue. A 10% brokerage fee should be added to the total revenue price.
A minimum balance to access the application must be $5000. If the balance is less than that amount, then the user is to receive a message reflecting that they are under and that they should deposit money into the account to continue their intended transactions.
The application should also allow the user to continue to either buy or sell stock!
The user will require an input file that is to be updated to an output file that will now show the transactions for the day.

Test data: for selling stock: balance $6000, selling 200 shares of Apple Stock (Aapl) at $108 per share, total revenue = 200 x 108 =$21600, brokerage fee = 0.10*21600 = $2160, net revenue = 21600-2160=$19440
Test data: for buying stock: balance $6000, buying 300 shares of IBM (IBM) at $139 per share, total cost = 300 x 139 =$41700, brokerage fee = 0.10*41700 = $4170, total cost = 41700 + 4170 =$45870

Data set for using the app
PIN number and amount<br>
1324 with $ -8,806.20<br>
1563 with $ 4,999.00<br>
2222 with $ 25,440.00<br>
3333 with $ -39,870.00<br>
4444 with $ 6,000.00<br>
5555 with $ 6,000.00
