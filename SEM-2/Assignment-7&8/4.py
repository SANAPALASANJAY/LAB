class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
    
    def __str__(self):
        print(f"Employee_Name: {self.name} Salary : {self.salary}")

    def __add__(self, other):
        if isinstance(other, Employee):
            return self.salary + other.salary
        raise TypeError(f"Unsupported operation of 'Employee' and {type(other)}")
    
    def __sub__(self, other):
        if isinstance(other, Employee):
            return self.salary - other.salary
        raise TypeError(f"Unsupported operation of 'Employee' and {type(other)}")
    
    def __lt__(self, other):
        return self.salary < other.salary
    
    def __gt__(self, other):
        return self.salary > other.salary


emp1 = Employee("Emp1", 50000)
emp2 = Employee("Emp2", 40000)

print(emp1 + emp2)
print(emp1 - emp2)
print(emp1 > emp2)
print(emp1 < emp2)
