Inventory Management System
# Inventory Management System

## Overview

Welcome to the **Inventory Management System**! This is a simple console-based application written in C++ that helps you manage an inventory of items efficiently. With this system, you can add, remove, search, display, and save items to a file. Perfect for small-scale inventory management needs.

## Features

- **Add Item**: Insert new items with name, quantity, and price.
- **Remove Item**: Delete items from the inventory by name.
- **Search Item**: Look up items by name and view their details.
- **Display Inventory**: List all items in the inventory with their details.
- **Save Inventory**: Save the current inventory to a file for future use.
- **Load Inventory**: Automatically load inventory data from a file when the program starts.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., GCC, Clang, or MSVC)
- A text editor or IDE (e.g., Visual Studio Code, CLion)

### Cloning the Repository

To get a copy of the project, clone it using Git:

```bash
git clone https://github.com/Ochieng-001/IMS.git


Code Structure
Item Structure: Represents an item with attributes like `name`, `quantity`, and `price`.
Functions:

•`addItem`: Adds an item to the inventory.
•`removeItem`: Removes an item from the inventory.
•`searchItem`: Searches for an item in the inventory.
•`displayInventory`: Displays all items in the inventory.
•`saveInventory`: Saves the inventory to a file.
•`loadInventory`: Loads the inventory from a file.


Getting Started
Prerequisites
A C++ compiler (e.g., GCC, Clang, or MSVC)
A text editor or IDE for editing and running C++ code
Compiling the Code
To compile the code, use the following command in your terminal:

bash
g++ -o inventory_management main.cpp
This will generate an executable file named inventory_management.

Running the Program
To run the compiled program, use the following command:

bash
./inventory_management



Using the Program
Load Inventory: The program automatically loads the inventory from the `inventory.txt` file at startup.
Choose an Option: Select an option from the menu to add, remove, search, display, or save items.
Save and Exit: When you're done, choose the save option to save your inventory and exit the program.
Example Usage

plaintext
Inventory Management System
1. Add Item
2. Remove Item
3. Search Item
4. Display Inventory
5. Save and Exit
Enter your choice: 1
Enter item name: Widget
Enter quantity: 10
Enter price: 2.99
File Structure
`main.cpp`: The main source code file containing all the logic for the inventory management system.
`inventory.txt`: The file used to save and load inventory data.
Contributing
If you'd like to contribute to the project, feel free to fork the repository, make your changes, and submit a pull request. Any improvements or suggestions are welcome!

License
This project is licensed under the MIT License. See the `LICENSE` file for more details.

