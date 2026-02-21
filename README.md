PAYE Tax Calculator (Zambia)

This C++ application is a Pay As You Earn (PAYE) calculator designed to help users determine their net salary after statutory deductions. It calculates income tax based on graduated tax bands, alongside mandatory contributions for NAPSA and Health Insurance.

As a student at Copperbelt University, this project is a great example of applying programming logic to local financial systems!🚀 

FeaturesStatutory Deductions: Automatically calculates NAPSA (5%) and Health Insurance (1%).

Graduated Tax Bands: 
Uses a tiered logic system to calculate PAYE tax based on the following gross salary thresholds:Band 1: Tax-exempt up to K5,100.Band 2: 20% tax on income between K5,101 and K7,100.Band 3: 30% tax on income between K7,101 and K9,200.Band 4: 37% tax on income exceeding K9,200.Iterative 

Logic: Utilizes a do-while loop within the tax function to process calculations.

🛠️ Technical Details
The program is structured into several modular functions to ensure clean code and reusability:

FunctionDescription
healthEnsurance(); Calculates the 1% National Health Insurance deduction.
napsa(); Calculates the 5% social security contribution.
taxCalculations(); The core engine that processes the graduated tax bands using conditional if statements.
main(); Handles user input/output and coordinates the function calls.

💻 How to Run
Prerequisites: Ensure you have a C++ compiler installed (like g++ or a modern IDE like VS Code or Code::Blocks).

Compile: Bashg++ main.cpp -o PayCalculator

Execute:Bash./PayCalculator

Input: Enter your monthly gross salary when prompted.

Current Code Logic 
Note: The current implementation uses a loop counter to repeat the tax logic. For a standard single-user calculation, ensure the counter logic aligns with your specific testing requirements for tax brackets.🔜 

Future Enhancements
[ ] Add a user interface (GUI)for better accessibility.
[ ] Implement a feature to export the payslip to a .txt file.
[ ] Update tax bands dynamically via a configuration file.
