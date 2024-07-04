# Assignment #3: Classes and Objects

## Using a typical supermarket as an example:

### 1. Identify at least five (5) objects/classes:

- **Product**
- **Customer**
- **Employee**
- **ShoppingCart**
- **CashRegister**

### 2. Identify two (2) subclasses for each of the five classes identified above:

- **Product:**

  - PerishableProduct
  - NonPerishableProduct

- **Customer:**

  - RegularCustomer
  - LoyaltyCustomer

- **Employee:**

  - Cashier
  - Stocker

- **ShoppingCart:**

  - PhysicalCart
  - OnlineCart

- **CashRegister:**
  - SelfCheckout
  - AssistedCheckout

### 3. Construct a UML Class Diagram:

Here is the textual representation of the UML Class Diagram:

+-----------------+
| Product |
+-----------------+
| - id: int |
| - name: string |
| - price: float |
+-----------------+
| + getPrice(): float |
+-----------------+
/\
 ||
+------------------------+ +---------------------------+
| PerishableProduct | | NonPerishableProduct |
+------------------------+ +---------------------------+
| - expirationDate: Date | | - shelfLife: int |
+------------------------+ +---------------------------+

+-----------------+
| Customer |
+-----------------+
| - id: int |
| - name: string |
+-----------------+
| + getDiscount(): float |
+-----------------+
/\
 ||
+--------------------+ +-----------------+
| RegularCustomer | | LoyaltyCustomer |
+--------------------+ +-----------------+
| - points: int | | - loyaltyID: int|
+--------------------+ +-----------------+

+-----------------+
| Employee |
+-----------------+
| - id: int |
| - name: string |
| - role: string |
+-----------------+
| + getRole(): string |
+-----------------+
/\
 ||
+----------------+ +--------------+
| Cashier | | Stocker |
+----------------+ +--------------+
| - shift: string| | - section: string |
+----------------+ +--------------+

+-------------------+
| ShoppingCart |
+-------------------+
| - id: int |
| - items: list |
+-------------------+
| + addItem(): void |
+-------------------+
/\
 ||
+------------------+ +-----------------+
| PhysicalCart | | OnlineCart |
+------------------+ +-----------------+
| - location: string| | - sessionID: int|
+------------------+ +-----------------+

+-------------------+
| CashRegister |
+-------------------+
| - id: int |
| - total: float |
+-------------------+
| + processPayment(): void |
+-------------------+
/\
 ||
+-------------------+ +--------------------+
| SelfCheckout | | AssistedCheckout |
+-------------------+ +--------------------+
| - cardOnly: bool | | - cashierID: int |
+-------------------+ +--------------------+
